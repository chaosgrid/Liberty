#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_420800);
CLANG_FORWARD_PROC_SYMBOL(public_420be0);
CLANG_FORWARD_PROC_SYMBOL(public_420c40);
CLANG_FORWARD_PROC_SYMBOL(public_420cb0);
CLANG_FORWARD_PROC_SYMBOL(public_509ca0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_509cd0 _public_509cd0
#define public_509cf7 _public_509cf7
#define public_509d23 _public_509d23
#define public_509d27 _public_509d27
#define public_509d47 _public_509d47

PROC_DECLARE(0x509ca0, internal_509ca0, public_509ca0);
extern "C" NAKED register_t __cdecl internal_509ca0()
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
        je public_509d23
        mov eax, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [eax]
        jne public_509d23
        cmp ebx, eax
        jne public_509d23
        mov ebx, dword ptr ds : [eax+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_509cf7
        lea esp, ss:[esp]
        public_509cd0 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_420be0
        mov edi, dword ptr ds : [edi]
        lea ecx, ds:[ebx+0xC]
        call public_420cb0
        push ebx
        call public_5b7e1d
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_509cd0
        public_509cf7 : nop
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
        public_509d23 : nop
        cmp ecx, ebx
        je public_509d47
        public_509d27 : nop
        mov edi, ecx
        lea ecx, ss:[esp+0x14]
        call public_420c40
        push edi
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, esi
        call public_420800
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, ebx
        jne public_509d27
        public_509d47 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x509ca0)
    }
}

#undef public_509cd0
#undef public_509cf7
#undef public_509d23
#undef public_509d27
#undef public_509d47
