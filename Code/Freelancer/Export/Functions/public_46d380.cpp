#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46d380);
CLANG_FORWARD_PROC_SYMBOL(public_46dfb0);
CLANG_FORWARD_PROC_SYMBOL(public_46e380);
CLANG_FORWARD_PROC_SYMBOL(public_595150);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_46d3b0 _public_46d3b0
#define public_46d3cf _public_46d3cf
#define public_46d3fb _public_46d3fb
#define public_46d400 _public_46d400
#define public_46d420 _public_46d420

PROC_DECLARE(0x46d380, internal_46d380, public_46d380);
extern "C" NAKED register_t __cdecl internal_46d380()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        mov ecx, dword ptr ss : [esp+0x10]
        push edi
        je public_46d3fb
        mov eax, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [eax]
        jne public_46d3fb
        cmp ebx, eax
        jne public_46d3fb
        mov ebx, dword ptr ds : [eax+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_46d3cf
        lea esp, ss:[esp]
        public_46d3b0 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_46e380
        mov edi, dword ptr ds : [edi]
        push ebx
        call public_5b7e1d
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_46d3b0
        public_46d3cf : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], 0
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        ret 0xC
        public_46d3fb : nop
        cmp ecx, ebx
        je public_46d420
        nop 
        public_46d400 : nop
        mov edi, ecx
        lea ecx, ss:[esp+0x14]
        call public_595150
        push edi
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, esi
        call public_46dfb0
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, ebx
        jne public_46d400
        public_46d420 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x46d380)
    }
}

#undef public_46d3b0
#undef public_46d3cf
#undef public_46d3fb
#undef public_46d400
#undef public_46d420
