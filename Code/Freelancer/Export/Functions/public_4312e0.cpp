#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4312e0);

#define public_43135c _public_43135c
#define public_43138c _public_43138c
#define public_4313a5 _public_4313a5
#define public_4313b1 _public_4313b1
#define public_4313bb _public_4313bb
#define public_4313c4 _public_4313c4
#define public_4313e5 _public_4313e5

PROC_DECLARE(0x4312e0, internal_4312e0, public_4312e0);
extern "C" NAKED register_t __cdecl internal_4312e0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5c6dd8]
        sub esp, 0x208
        push ebx
        push ebp
        push esi
        push edi
        mov ebp, ecx
        mov ecx, dword ptr ds : [eax]
        push ecx
        lea edx, ss:[esp+0x118]
/*FIXUP push offset public_5cab4c @0x4312fb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cab4c
        push edx
        call dword ptr ds : [public_5c6068]
        mov eax, dword ptr ss : [ebp+8]
/*FIXUP push offset public_5cab48 @0x43130a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cab48
        push eax
        lea ecx, ss:[esp+0x128]
        push ecx
        xor esi, esi
        lea edx, ss:[esp+0x28]
        push esi
        push edx
        call dword ptr ds : [public_5c70b8]
        lea eax, ss:[esp+0x30]
        push esi
        push eax
        call dword ptr ds : [public_5c70d0]
        add esp, 0x28
        cmp eax, 0xFFFFFFFF
        je public_4313e5
        or ecx, 0xFFFFFFFF
        xor eax, eax
        add ebp, 0x2C
        lea edi, ss:[esp+0x10]
        repne scasb
        not ecx
        dec ecx
        mov ebx, ecx
        cmp ebx, 0xFFFFFFFD
        jbe public_43135c
        call dword ptr ds : [public_5c7070]
        public_43135c : nop
        mov eax, dword ptr ss : [ebp+4]
        cmp eax, esi
        je public_43138c
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_43138c
        cmp cl, 0xFF
        je public_43138c
        cmp ebx, esi
        jne public_4313bb
        dec cl
        mov byte ptr ds : [eax-1], cl
        pop edi
        mov dword ptr ss : [ebp+4], esi
        mov dword ptr ss : [ebp+8], esi
        mov dword ptr ss : [ebp+0xC], esi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x208
        ret 
        public_43138c : nop
        cmp ebx, esi
        jne public_4313a5
        push 1
        mov ecx, ebp
        call dword ptr ds : [public_5c7084]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x208
        ret 
        public_4313a5 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        cmp eax, 0x1F
        ja public_4313b1
        cmp eax, ebx
        jae public_4313c4
        public_4313b1 : nop
        push 1
        mov ecx, ebp
        call dword ptr ds : [public_5c7084]
        public_4313bb : nop
        mov ecx, ebp
        push ebx
        call dword ptr ds : [public_5c7074]
        public_4313c4 : nop
        mov edi, dword ptr ss : [ebp+4]
        mov ecx, ebx
        mov edx, ecx
        shr ecx, 2
        lea esi, ss:[esp+0x10]
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov eax, dword ptr ss : [ebp+4]
        mov dword ptr ss : [ebp+8], ebx
        mov byte ptr ds : [ebx+eax], 0
        public_4313e5 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x208
        ret 
        UNREACHABLE_TRAP(0x4312e0)
    }
}

#undef public_43135c
#undef public_43138c
#undef public_4313a5
#undef public_4313b1
#undef public_4313bb
#undef public_4313c4
#undef public_4313e5
