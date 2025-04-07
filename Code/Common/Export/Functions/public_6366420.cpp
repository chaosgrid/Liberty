#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6366420);

#define public_6366458 _public_6366458
#define public_6366483 _public_6366483
#define public_636648e _public_636648e
#define public_63664b2 _public_63664b2
#define public_63664dd _public_63664dd
#define public_63664e7 _public_63664e7
#define public_6366505 _public_6366505
#define public_6366534 _public_6366534

PROC_DECLARE(0x6366420, internal_6366420, public_6366420);
extern "C" NAKED register_t __cdecl internal_6366420()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x24]
        test edi, edi
        je public_6366534
        mov ebp, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [ebp+edi*4-4]
        lea eax, ds:[edi-1]
        cmp edx, eax
        jne public_63664dd
        xor edx, edx
        test edi, edi
        mov dword ptr ss : [esp+0x14], edx
        jle public_6366534
        mov eax, dword ptr ss : [esp+0x1C]
        public_6366458 : nop
        mov esi, dword ptr ss : [ebp+edx*4]
        imul esi, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [eax+0xC]
        mov edi, dword ptr ds : [ecx+0xC]
        lea ebx, ds:[eax+esi*4]
        mov eax, dword ptr ds : [ecx+8]
        mov esi, eax
        imul esi, edx
        dec eax
        test eax, eax
        lea esi, ds:[edi+esi*4]
        jl public_63664b2
        add eax, 4
        shr eax, 2
        mov dword ptr ss : [esp+0x10], eax
        public_6366483 : nop
        mov edx, ebx
        mov eax, esi
        sub edx, esi
        mov edi, 4
        public_636648e : nop
        mov ebp, dword ptr ds : [edx+eax]
        mov dword ptr ds : [eax], ebp
        add eax, 4
        dec edi
        jne public_636648e
        mov eax, dword ptr ss : [esp+0x10]
        add esi, 0x10
        add ebx, 0x10
        dec eax
        mov dword ptr ss : [esp+0x10], eax
        jne public_6366483
        mov ebp, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x14]
        public_63664b2 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov esi, dword ptr ss : [ebp+edx*4]
        mov edi, dword ptr ds : [eax+0x10]
        mov esi, dword ptr ds : [edi+esi*4]
        mov ebx, dword ptr ds : [ecx+0x10]
        mov dword ptr ds : [ebx+edx*4], esi
        mov esi, dword ptr ss : [esp+0x24]
        inc edx
        cmp edx, esi
        mov dword ptr ss : [esp+0x14], edx
        jl public_6366458
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        public_63664dd : nop
        xor edx, edx
        test edi, edi
        jle public_6366534
        mov esi, dword ptr ss : [esp+0x1C]
        public_63664e7 : nop
        mov eax, dword ptr ds : [ecx+8]
        mov ebx, dword ptr ds : [ecx+0xC]
        imul eax, edx
        lea eax, ds:[ebx+eax*4]
        mov ebx, dword ptr ss : [ebp+edx*4]
        imul ebx, dword ptr ds : [esi+8]
        mov esi, dword ptr ds : [esi+0xC]
        lea ebx, ds:[esi+ebx*4]
        mov esi, ebp
        sub esi, eax
        public_6366505 : nop
        mov ebp, dword ptr ds : [esi+eax]
        mov ebp, dword ptr ds : [ebx+ebp*4]
        mov dword ptr ds : [eax], ebp
        add eax, 4
        dec edi
        jne public_6366505
        mov ebp, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [ebp+edx*4]
        mov esi, dword ptr ss : [esp+0x1C]
        mov edi, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [edi+eax*4]
        mov ebx, dword ptr ds : [ecx+0x10]
        mov edi, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [ebx+edx*4], eax
        inc edx
        cmp edx, edi
        jl public_63664e7
        public_6366534 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        UNREACHABLE_TRAP(0x6366420)
    }
}

#undef public_6366458
#undef public_6366483
#undef public_636648e
#undef public_63664b2
#undef public_63664dd
#undef public_63664e7
#undef public_6366505
#undef public_6366534
