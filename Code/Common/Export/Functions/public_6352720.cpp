#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6352650);
CLANG_FORWARD_PROC_SYMBOL(public_6352720);

#define public_635273d _public_635273d
#define public_6352761 _public_6352761
#define public_6352796 _public_6352796
#define public_63527ad _public_63527ad

PROC_DECLARE(0x6352720, internal_6352720, public_6352720);
extern "C" NAKED register_t __cdecl internal_6352720()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi]
        shl ecx, 1
        cmp ecx, eax
        push edi
        jl public_635273d
        lea edx, ds:[eax+eax]
        push edx
        mov ecx, esi
        call public_6352650
        public_635273d : nop
        mov ebp, dword ptr ds : [esi+4]
        mov eax, dword ptr ss : [esp+0x20]
        mov ebx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+0xC]
        mov ecx, ebp
        and ecx, eax
        inc ebx
        lea eax, ds:[ecx+ecx*2]
        lea eax, ds:[edx+eax*4]
        mov dword ptr ds : [esi+8], ebx
        mov ebx, dword ptr ds : [eax+4]
        test ebx, ebx
        mov edi, ecx
        je public_63527ad
        public_6352761 : nop
        mov edx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x10], edx
        and edx, ebp
        cmp ecx, edx
        jge public_6352796
        mov ebp, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ds : [eax+4], ebp
        mov ebp, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax+8], ebp
        mov ebp, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [eax], ebp
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x1C], ecx
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x20], eax
        mov ecx, edx
        public_6352796 : nop
        mov ebp, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi+0xC]
        inc edi
        and edi, ebp
        lea edx, ds:[edi+edi*2]
        mov ebx, dword ptr ds : [eax+edx*4+4]
        test ebx, ebx
        lea eax, ds:[eax+edx*4]
        jne public_6352761
        public_63527ad : nop
        mov ecx, dword ptr ds : [esi+0xC]
        mov edx, dword ptr ss : [esp+0x18]
        lea edi, ds:[edi+edi*2]
        shl edi, 2
        mov dword ptr ds : [ecx+edi+4], edx
        mov eax, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax+edi+8], ecx
        mov edx, dword ptr ds : [esi+0xC]
        mov eax, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [edx+edi], eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x6352720)
    }
}

#undef public_635273d
#undef public_6352761
#undef public_6352796
#undef public_63527ad
