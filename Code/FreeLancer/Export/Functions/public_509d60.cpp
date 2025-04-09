#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46c8c0);
CLANG_FORWARD_PROC_SYMBOL(public_509d60);
CLANG_FORWARD_PROC_SYMBOL(public_509e10);
CLANG_FORWARD_PROC_SYMBOL(public_52afa0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_509d90 _public_509d90
#define public_509daf _public_509daf
#define public_509ddb _public_509ddb
#define public_509de0 _public_509de0
#define public_509e00 _public_509e00

PROC_DECLARE(0x509d60, internal_509d60, public_509d60);
extern "C" NAKED register_t __cdecl internal_509d60()
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
        je public_509ddb
        mov eax, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [eax]
        jne public_509ddb
        cmp ebx, eax
        jne public_509ddb
        mov ebx, dword ptr ds : [eax+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_509daf
        lea esp, ss:[esp]
        public_509d90 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_509e10
        mov edi, dword ptr ds : [edi]
        push ebx
        call public_5b7e1d
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_509d90
        public_509daf : nop
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
        public_509ddb : nop
        cmp ecx, ebx
        je public_509e00
        nop 
        public_509de0 : nop
        mov edi, ecx
        lea ecx, ss:[esp+0x14]
        call public_52afa0
        push edi
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, esi
        call public_46c8c0
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, ebx
        jne public_509de0
        public_509e00 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x509d60)
    }
}

#undef public_509d90
#undef public_509daf
#undef public_509ddb
#undef public_509de0
#undef public_509e00
