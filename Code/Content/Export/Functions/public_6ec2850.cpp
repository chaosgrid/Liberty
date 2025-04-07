#include "Content-PCH.h"


#define public_6ec2881 _public_6ec2881
#define public_6ec289c _public_6ec289c
#define public_6ec28bc _public_6ec28bc
#define public_6ec28f7 _public_6ec28f7
#define public_6ec291a _public_6ec291a
#define public_6ec293d _public_6ec293d
#define public_6ec2959 _public_6ec2959

PROC_DECLARE(0x6ec2850, internal_6ec2850, public_6ec2850);
extern "C" NAKED register_t __cdecl internal_6ec2850()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        push esi
        push edi
        mov ebx, ecx
        push 0
        mov ecx, ebp
        call dword ptr ds : [public_6fb3040]
        mov edi, dword ptr ds : [public_6fb3048]
        push 1
        mov ecx, ebp
        mov byte ptr ds : [ebx+0xC], al
        call edi
        mov esi, eax
        test esi, esi
        jne public_6ec2881
        mov dword ptr ds : [ebx+0x14], eax
        mov byte ptr ds : [ebx+0x18], al
        jmp public_6ec28bc
        public_6ec2881 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        lea edx, ds:[ebx+0x18]
        jb public_6ec289c
        mov eax, 0x2F
        public_6ec289c : nop
        mov ecx, eax
        mov edi, edx
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov edi, dword ptr ds : [public_6fb3048]
        mov byte ptr ds : [eax+ebx+0x18], 0
        mov dword ptr ds : [ebx+0x14], eax
        public_6ec28bc : nop
        push 2
        mov ecx, ebp
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6ec2959
/*FIXUP push offset public_6fb59b0 @0x6ec28ce*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb59b0
        push 2
        mov ecx, ebp
        call edi
        mov esi, dword ptr ds : [public_6fb3294]
        push eax
        call esi
        add esp, 8
        test eax, eax
        jne public_6ec28f7
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [ebx+0x10], 0x7FC0
        pop ebx
        ret 4
/*FIXUP public_6ec28f7 : nop
        push offset public_6fb59a0 @0x6ec28f7*/
  FIXUP public_6ec28f7 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb59a0
        push 2
        mov ecx, ebp
        call edi
        push eax
        call esi
        add esp, 8
        test eax, eax
        jne public_6ec291a
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [ebx+0x10], 0x30000
        pop ebx
        ret 4
/*FIXUP public_6ec291a : nop
        push offset public_6fb5994 @0x6ec291a*/
  FIXUP public_6ec291a : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb5994
        push 2
        mov ecx, ebp
        call edi
        push eax
        call esi
        add esp, 8
        test eax, eax
        jne public_6ec293d
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [ebx+0x10], 0x8000
        pop ebx
        ret 4
/*FIXUP public_6ec293d : nop
        push offset public_6fb5988 @0x6ec293d*/
  FIXUP public_6ec293d : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb5988
        push 2
        mov ecx, ebp
        call edi
        push eax
        call esi
        add esp, 8
        test eax, eax
        jne public_6ec2959
        mov dword ptr ds : [ebx+0x10], 0x200000
        public_6ec2959 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6ec2850)
    }
}

#undef public_6ec2881
#undef public_6ec289c
#undef public_6ec28bc
#undef public_6ec28f7
#undef public_6ec291a
#undef public_6ec293d
#undef public_6ec2959
