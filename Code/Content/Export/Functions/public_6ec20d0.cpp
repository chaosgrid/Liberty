#include "Content-PCH.h"


#define public_6ec20fd _public_6ec20fd
#define public_6ec2116 _public_6ec2116
#define public_6ec2133 _public_6ec2133
#define public_6ec215c _public_6ec215c
#define public_6ec217f _public_6ec217f
#define public_6ec21a2 _public_6ec21a2
#define public_6ec21bc _public_6ec21bc

PROC_DECLARE(0x6ec20d0, internal_6ec20d0, public_6ec20d0);
extern "C" NAKED register_t __cdecl internal_6ec20d0()
{
    __asm
    {
        sub esp, 0x44
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        mov ecx, dword ptr ss : [esp+0x54]
        xor ebx, ebx
        push ebx
        call dword ptr ds : [public_6fb3048]
        mov esi, eax
        cmp esi, ebx
        mov dword ptr ss : [esp+0xC], ebx
        mov byte ptr ss : [esp+0x10], bl
        jne public_6ec20fd
        mov dword ptr ss : [esp+0xC], ebx
        mov byte ptr ss : [esp+0x10], bl
        jmp public_6ec2133
        public_6ec20fd : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        push edi
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x40
        jb public_6ec2116
        mov eax, 0x3F
        public_6ec2116 : nop
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        lea edi, ss:[esp+0x14]
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov byte ptr ss : [esp+eax+0x14], bl
        mov dword ptr ss : [esp+0x10], eax
        pop edi
        public_6ec2133 : nop
        mov esi, dword ptr ds : [public_6fb3294]
        lea eax, ss:[esp+0x10]
/*FIXUP push offset public_6fb594c @0x6ec213d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb594c
        push eax
        call esi
        add esp, 8
        test eax, eax
        jne public_6ec215c
        pop esi
        mov dword ptr ss : [ebp+0xC], 1
        pop ebp
        pop ebx
        add esp, 0x44
        ret 4
        public_6ec215c : nop
        lea ecx, ss:[esp+0x10]
/*FIXUP push offset public_6fb5948 @0x6ec2160*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb5948
        push ecx
        call esi
        add esp, 8
        test eax, eax
        jne public_6ec217f
        pop esi
        mov dword ptr ss : [ebp+0xC], 2
        pop ebp
        pop ebx
        add esp, 0x44
        ret 4
        public_6ec217f : nop
        lea edx, ss:[esp+0x10]
/*FIXUP push offset public_6fb5940 @0x6ec2183*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb5940
        push edx
        call esi
        add esp, 8
        test eax, eax
        jne public_6ec21a2
        pop esi
        mov dword ptr ss : [ebp+0xC], 4
        pop ebp
        pop ebx
        add esp, 0x44
        ret 4
        public_6ec21a2 : nop
        lea eax, ss:[esp+0x10]
/*FIXUP push offset public_6fb5938 @0x6ec21a6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb5938
        push eax
        call esi
        add esp, 8
        test eax, eax
        jne public_6ec21bc
        mov dword ptr ss : [ebp+0xC], 8
        public_6ec21bc : nop
        pop esi
        pop ebp
        pop ebx
        add esp, 0x44
        ret 4
        UNREACHABLE_TRAP(0x6ec20d0)
    }
}

#undef public_6ec20fd
#undef public_6ec2116
#undef public_6ec2133
#undef public_6ec215c
#undef public_6ec217f
#undef public_6ec21a2
#undef public_6ec21bc
