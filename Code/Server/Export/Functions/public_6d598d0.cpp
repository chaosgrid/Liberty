#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d598d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5af80);

#define public_6d598e3 _public_6d598e3
#define public_6d598fa _public_6d598fa
#define public_6d598fd _public_6d598fd
#define public_6d59902 _public_6d59902
#define public_6d59910 _public_6d59910
#define public_6d59926 _public_6d59926
#define public_6d5992a _public_6d5992a
#define public_6d5992f _public_6d5992f

PROC_DECLARE(0x6d598d0, internal_6d598d0, public_6d598d0);
extern "C" NAKED register_t __cdecl internal_6d598d0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+4]
        mov esi, dword ptr ds : [eax+4]
        mov ebp, eax
        cmp esi, dword ptr ds : [edi+8]
        je public_6d59902
        public_6d598e3 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        lea eax, ds:[esi+0xC]
        push eax
        call public_6d5af80
        test eax, eax
        jge public_6d598fa
        mov ebp, esi
        mov esi, dword ptr ds : [esi]
        jmp public_6d598fd
        public_6d598fa : nop
        mov esi, dword ptr ds : [esi+8]
        public_6d598fd : nop
        cmp esi, dword ptr ds : [edi+8]
        jne public_6d598e3
        public_6d59902 : nop
        mov eax, dword ptr ds : [edi+4]
        mov esi, dword ptr ds : [eax+4]
        mov ebx, eax
        cmp esi, dword ptr ds : [edi+8]
        je public_6d5992f
        nop 
        public_6d59910 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        push ecx
        lea ecx, ds:[esi+0xC]
        call public_6d5af80
        test eax, eax
        jge public_6d59926
        mov esi, dword ptr ds : [esi+8]
        jmp public_6d5992a
        public_6d59926 : nop
        mov ebx, esi
        mov esi, dword ptr ds : [esi]
        public_6d5992a : nop
        cmp esi, dword ptr ds : [edi+8]
        jne public_6d59910
        public_6d5992f : nop
        mov eax, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        mov dword ptr ds : [eax+4], ebp
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6d598d0)
    }
}

#undef public_6d598e3
#undef public_6d598fa
#undef public_6d598fd
#undef public_6d59902
#undef public_6d59910
#undef public_6d59926
#undef public_6d5992a
#undef public_6d5992f
