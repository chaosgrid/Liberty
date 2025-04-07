#include "Server-PCH.h"


#define public_6cfe9c0 _public_6cfe9c0
#define public_6cfea00 _public_6cfea00
#define public_6cfea2c _public_6cfea2c
#define public_6cfea44 _public_6cfea44
#define public_6cfea61 _public_6cfea61
#define public_6cfea7e _public_6cfea7e
#define public_6cfea9b _public_6cfea9b
#define public_6cfeab6 _public_6cfeab6
#define public_6cfeac8 _public_6cfeac8

PROC_DECLARE(0x6cfe9a0, internal_6cfe9a0, public_6cfe9a0);
extern "C" NAKED register_t __cdecl internal_6cfe9a0()
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
        je public_6cfeac8
        push esi
        push edi
        lea ecx, ds:[ecx]
        public_6cfe9c0 : nop
        push ebp
        mov ecx, ebx
        call dword ptr ds : [public_6d64558]
        test al, al
        jne public_6cfeab6
        mov esi, dword ptr ds : [public_6d64568]
/*FIXUP push offset public_6d66f50 @0x6cfe9d7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d66f50
        mov ecx, ebp
        call esi
        test al, al
        mov ecx, ebp
        je public_6cfea00
        call dword ptr ds : [public_6d64564]
        push 0
        push eax
        call dword ptr ds : [public_6d64250]
        add esp, 8
        mov dword ptr ds : [ebx+0x28], eax
        jmp public_6cfeab6
/*FIXUP public_6cfea00 : nop
        push offset public_6d66f34 @0x6cfea00*/
  FIXUP public_6cfea00 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d66f34
        call esi
        test al, al
        je public_6cfeab6
        mov ecx, ebp
        call dword ptr ds : [public_6d64564]
        mov esi, eax
        test esi, esi
        mov byte ptr ss : [esp+0x14], 0
        jne public_6cfea2c
        mov dword ptr ss : [esp+0x10], eax
        mov byte ptr ss : [esp+0x14], al
        jmp public_6cfea61
        public_6cfea2c : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x20
        jb public_6cfea44
        mov eax, 0x1F
        public_6cfea44 : nop
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
        public_6cfea61 : nop
        mov edi, offset public_6d66f2c
        lea esi, ss:[esp+0x14]
        mov ecx, 7
        xor eax, eax
        repe cmpsb
        jne public_6cfea7e
        mov dword ptr ds : [ebx+0x2C], 2
        jmp public_6cfeab6
        public_6cfea7e : nop
        mov edi, offset public_6d66f20
        lea esi, ss:[esp+0x14]
        mov ecx, 0xA
        xor edx, edx
        repe cmpsb
        jne public_6cfea9b
        mov dword ptr ds : [ebx+0x2C], 3
        jmp public_6cfeab6
        public_6cfea9b : nop
        mov edi, offset public_6d66f48
        lea esi, ss:[esp+0x14]
        mov ecx, 5
        xor eax, eax
        repe cmpsb
        jne public_6cfeab6
        mov dword ptr ds : [ebx+0x2C], 5
        public_6cfeab6 : nop
        mov ecx, ebp
        call dword ptr ds : [public_6d6455c]
        test al, al
        jne public_6cfe9c0
        pop edi
        pop esi
        public_6cfeac8 : nop
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x24
        ret 4
        UNREACHABLE_TRAP(0x6cfe9a0)
    }
}

#undef public_6cfe9c0
#undef public_6cfea00
#undef public_6cfea2c
#undef public_6cfea44
#undef public_6cfea61
#undef public_6cfea7e
#undef public_6cfea9b
#undef public_6cfeab6
#undef public_6cfeac8
