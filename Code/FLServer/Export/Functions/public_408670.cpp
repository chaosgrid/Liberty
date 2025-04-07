#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_418978);
CLANG_FORWARD_PROC_SYMBOL(public_418a9e);

#define public_4086a1 _public_4086a1
#define public_4086b3 _public_4086b3
#define public_4086c0 _public_4086c0
#define public_4086ef _public_4086ef
#define public_4086f3 _public_4086f3
#define public_408708 _public_408708
#define public_40871f _public_40871f
#define public_408734 _public_408734

PROC_DECLARE(0x408670, internal_408670, public_408670);
extern "C" NAKED register_t __cdecl internal_408670()
{
    __asm
    {
        sub esp, 8
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        mov edx, ecx
        push ebp
        lea ecx, ds:[eax+4]
        lea ebp, ds:[edx+4]
        cmp ebp, ecx
        push esi
        push edi
        mov dword ptr ss : [esp+0x14], edx
        je public_408734
        mov esi, dword ptr ss : [ebp+4]
        mov eax, dword ptr ds : [esi]
        cmp eax, esi
        mov ecx, dword ptr ds : [ecx+4]
        mov ebx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x10], ecx
        je public_4086b3
        public_4086a1 : nop
        cmp ebx, ecx
        je public_4086b3
        mov edi, dword ptr ds : [ebx+8]
        mov dword ptr ds : [eax+8], edi
        mov eax, dword ptr ds : [eax]
        cmp eax, esi
        mov ebx, dword ptr ds : [ebx]
        jne public_4086a1
        public_4086b3 : nop
        cmp eax, esi
        mov edi, eax
        je public_4086ef
        lea esp, ss:[esp]
        public_4086c0 : nop
        mov eax, edi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_418978
        mov ecx, dword ptr ss : [ebp+8]
        add esp, 4
        dec ecx
        cmp edi, esi
        mov dword ptr ss : [ebp+8], ecx
        jne public_4086c0
        mov edx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x10]
        public_4086ef : nop
        cmp ebx, ecx
        je public_408734
        public_4086f3 : nop
        mov edi, dword ptr ds : [esi+4]
        push 0xC
        call public_418a9e
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_408708
        mov edi, eax
        public_408708 : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_40871f
        mov edx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [eax], edx
        public_40871f : nop
        mov ecx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [esp+0x10]
        inc ecx
        mov dword ptr ss : [ebp+8], ecx
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, eax
        jne public_4086f3
        mov edx, dword ptr ss : [esp+0x14]
        public_408734 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        lea esi, ds:[eax+0x10]
        lea edi, ds:[edx+0x10]
        mov ecx, 6
        rep movsd
        pop edi
        mov ecx, eax
        mov eax, dword ptr ds : [ecx+0x28]
        pop esi
        pop ebp
        mov dword ptr ds : [edx+0x28], eax
        mov eax, edx
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x408670)
    }
}

#undef public_4086a1
#undef public_4086b3
#undef public_4086c0
#undef public_4086ef
#undef public_4086f3
#undef public_408708
#undef public_40871f
#undef public_408734
