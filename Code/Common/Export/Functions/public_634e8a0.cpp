#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63441a0);
CLANG_FORWARD_PROC_SYMBOL(public_634e8a0);

#define public_634e8cc _public_634e8cc
#define public_634e8e5 _public_634e8e5
#define public_634e902 _public_634e902
#define public_634e92f _public_634e92f
#define public_634e942 _public_634e942
#define public_634e952 _public_634e952

PROC_DECLARE(0x634e8a0, internal_634e8a0, public_634e8a0);
extern "C" NAKED register_t __cdecl internal_634e8a0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+0x14]
        and eax, 0xFFCFFFFF
        or eax, 0xC0000
        mov dword ptr ds : [esi+0x14], eax
        mov edx, dword ptr ds : [ecx+8]
        mov eax, edx
        test eax, eax
        push edi
        mov dword ptr ds : [esi+0x74], edx
        mov dword ptr ds : [esi+0x78], 0
        je public_634e8cc
        mov dword ptr ds : [eax+0x78], esi
        public_634e8cc : nop
        mov dword ptr ds : [ecx+8], esi
        mov edi, dword ptr ds : [esi+0x28]
        mov edi, dword ptr ds : [edi+0x20]
        test edi, edi
        lea eax, ds:[esi+0x18]
        lea edx, ds:[esi+0x34]
        mov dword ptr ds : [eax+8], edi
        je public_634e8e5
        mov dword ptr ds : [edi+0xC], eax
        public_634e8e5 : nop
        mov edi, dword ptr ds : [eax+0x10]
        mov dword ptr ds : [eax+0xC], 0
        mov dword ptr ds : [edi+0x20], eax
        mov edi, dword ptr ds : [edx+0x10]
        mov edi, dword ptr ds : [edi+0x20]
        test edi, edi
        mov dword ptr ds : [edx+8], edi
        je public_634e902
        mov dword ptr ds : [edi+0xC], edx
        public_634e902 : nop
        mov edi, dword ptr ds : [edx+0x10]
        mov dword ptr ds : [edx+0xC], 0
        mov dword ptr ds : [edi+0x20], edx
        mov eax, dword ptr ds : [eax+0x10]
        mov eax, dword ptr ds : [eax+0x98]
        mov edi, dword ptr ds : [eax+0x10]
        test edi, edi
        jne public_634e92f
        mov edx, dword ptr ds : [edx+0x10]
        mov eax, dword ptr ds : [edx+0x98]
        mov edx, dword ptr ds : [eax+0x10]
        test edx, edx
        je public_634e952
        public_634e92f : nop
        lea edi, ds:[ecx+0xC]
        mov cx, word ptr ds : [edi+2]
        cmp cx, word ptr ds : [edi]
        jb public_634e942
        mov ecx, edi
        call public_63441a0
        public_634e942 : nop
        mov eax, dword ptr ds : [edi+4]
        xor edx, edx
        mov dx, word ptr ds : [edi+2]
        mov dword ptr ds : [eax+edx*4], esi
        inc word ptr ds : [edi+2]
        public_634e952 : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x634e8a0)
    }
}

#undef public_634e8cc
#undef public_634e8e5
#undef public_634e902
#undef public_634e92f
#undef public_634e942
#undef public_634e952
