#include "Server-PCH.h"


#define public_6cfed60 _public_6cfed60
#define public_6cfeda0 _public_6cfeda0
#define public_6cfedc8 _public_6cfedc8
#define public_6cfede0 _public_6cfede0
#define public_6cfedfd _public_6cfedfd
#define public_6cfee16 _public_6cfee16
#define public_6cfee1c _public_6cfee1c
#define public_6cfee34 _public_6cfee34
#define public_6cfee46 _public_6cfee46

PROC_DECLARE(0x6cfed40, internal_6cfed40, public_6cfed40);
extern "C" NAKED register_t __cdecl internal_6cfed40()
{
    __asm
    {
        sub esp, 0x24
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x30]
        mov ebx, ecx
        mov ecx, ebp
        call dword ptr ds : [public_6d6455c]
        test al, al
        je public_6cfee46
        push esi
        push edi
        lea ecx, ds:[ecx]
        public_6cfed60 : nop
        push ebp
        mov ecx, ebx
        call dword ptr ds : [public_6d64558]
        test al, al
        jne public_6cfee34
        mov esi, dword ptr ds : [public_6d64568]
/*FIXUP push offset public_6d66f50 @0x6cfed77*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d66f50
        mov ecx, ebp
        call esi
        test al, al
        mov ecx, ebp
        je public_6cfeda0
        call dword ptr ds : [public_6d64564]
        push 0
        push eax
        call dword ptr ds : [public_6d64250]
        add esp, 8
        mov dword ptr ds : [ebx+0x28], eax
        jmp public_6cfee34
/*FIXUP public_6cfeda0 : nop
        push offset public_6d66f0c @0x6cfeda0*/
  FIXUP public_6cfeda0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d66f0c
        call esi
        test al, al
        mov ecx, ebp
        je public_6cfee1c
        call dword ptr ds : [public_6d64564]
        mov esi, eax
        test esi, esi
        mov byte ptr ss : [esp+0x14], 0
        jne public_6cfedc8
        mov dword ptr ss : [esp+0x10], eax
        mov byte ptr ss : [esp+0x14], al
        jmp public_6cfedfd
        public_6cfedc8 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x20
        jb public_6cfede0
        mov eax, 0x1F
        public_6cfede0 : nop
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        lea edi, ss:[esp+0x14]
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov byte ptr ss : [esp+eax+0x14], 0
        mov dword ptr ss : [esp+0x10], eax
        public_6cfedfd : nop
        mov edi, offset public_6d66f00
        lea esi, ss:[esp+0x14]
        mov ecx, 9
        xor eax, eax
        repe cmpsb
        jne public_6cfee16
        mov byte ptr ds : [ebx+0x30], al
        jmp public_6cfee34
        public_6cfee16 : nop
        mov byte ptr ds : [ebx+0x30], 1
        jmp public_6cfee34
/*FIXUP public_6cfee1c : nop
        push offset public_6d66ef4 @0x6cfee1c*/
  FIXUP public_6cfee1c : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d66ef4
        call esi
        test al, al
        je public_6cfee34
        push 0
        mov ecx, ebp
        call dword ptr ds : [public_6d64560]
        mov dword ptr ds : [ebx+0x2C], eax
        public_6cfee34 : nop
        mov ecx, ebp
        call dword ptr ds : [public_6d6455c]
        test al, al
        jne public_6cfed60
        pop edi
        pop esi
        public_6cfee46 : nop
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x24
        ret 4
        UNREACHABLE_TRAP(0x6cfed40)
    }
}

#undef public_6cfed60
#undef public_6cfeda0
#undef public_6cfedc8
#undef public_6cfede0
#undef public_6cfedfd
#undef public_6cfee16
#undef public_6cfee1c
#undef public_6cfee34
#undef public_6cfee46
