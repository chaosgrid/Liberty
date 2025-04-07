#include "Server-PCH.h"


#define public_6cfe390 _public_6cfe390
#define public_6cfe3d0 _public_6cfe3d0
#define public_6cfe3fc _public_6cfe3fc
#define public_6cfe414 _public_6cfe414
#define public_6cfe431 _public_6cfe431
#define public_6cfe44e _public_6cfe44e
#define public_6cfe469 _public_6cfe469
#define public_6cfe47b _public_6cfe47b

PROC_DECLARE(0x6cfe370, internal_6cfe370, public_6cfe370);
extern "C" NAKED register_t __cdecl internal_6cfe370()
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
        je public_6cfe47b
        push esi
        push edi
        lea ecx, ds:[ecx]
        public_6cfe390 : nop
        push ebp
        mov ecx, ebx
        call dword ptr ds : [public_6d64558]
        test al, al
        jne public_6cfe469
        mov esi, dword ptr ds : [public_6d64568]
/*FIXUP push offset public_6d66f3c @0x6cfe3a7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d66f3c
        mov ecx, ebp
        call esi
        test al, al
        mov ecx, ebp
        je public_6cfe3d0
        call dword ptr ds : [public_6d64564]
        push 0
        push eax
        call dword ptr ds : [public_6d64250]
        add esp, 8
        mov dword ptr ds : [ebx+0x28], eax
        jmp public_6cfe469
/*FIXUP public_6cfe3d0 : nop
        push offset public_6d66f34 @0x6cfe3d0*/
  FIXUP public_6cfe3d0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d66f34
        call esi
        test al, al
        je public_6cfe469
        mov ecx, ebp
        mov byte ptr ss : [esp+0x14], 0
        call dword ptr ds : [public_6d64564]
        mov esi, eax
        test esi, esi
        jne public_6cfe3fc
        mov dword ptr ss : [esp+0x10], eax
        mov byte ptr ss : [esp+0x14], al
        jmp public_6cfe431
        public_6cfe3fc : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x20
        jb public_6cfe414
        mov eax, 0x1F
        public_6cfe414 : nop
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
        public_6cfe431 : nop
        mov edi, offset public_6d66f2c
        lea esi, ss:[esp+0x14]
        mov ecx, 7
        xor eax, eax
        repe cmpsb
        jne public_6cfe44e
        mov dword ptr ds : [ebx+0x2C], 2
        jmp public_6cfe469
        public_6cfe44e : nop
        mov edi, offset public_6d66f20
        lea esi, ss:[esp+0x14]
        mov ecx, 0xA
        xor edx, edx
        repe cmpsb
        jne public_6cfe469
        mov dword ptr ds : [ebx+0x2C], 3
        public_6cfe469 : nop
        mov ecx, ebp
        call dword ptr ds : [public_6d6455c]
        test al, al
        jne public_6cfe390
        pop edi
        pop esi
        public_6cfe47b : nop
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x24
        ret 4
        UNREACHABLE_TRAP(0x6cfe370)
    }
}

#undef public_6cfe390
#undef public_6cfe3d0
#undef public_6cfe3fc
#undef public_6cfe414
#undef public_6cfe431
#undef public_6cfe44e
#undef public_6cfe469
#undef public_6cfe47b
