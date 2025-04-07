#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);

#define public_6ce31a3 _public_6ce31a3
#define public_6ce31b5 _public_6ce31b5
#define public_6ce31c0 _public_6ce31c0
#define public_6ce31ef _public_6ce31ef
#define public_6ce31f3 _public_6ce31f3
#define public_6ce3208 _public_6ce3208
#define public_6ce321f _public_6ce321f
#define public_6ce3234 _public_6ce3234
#define public_6ce3238 _public_6ce3238

PROC_DECLARE(0x6ce3170, internal_6ce3170, public_6ce3170);
extern "C" NAKED register_t __cdecl internal_6ce3170()
{
    __asm
    {
        sub esp, 8
        mov eax, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [eax]
        push ebx
        push ebp
        mov dword ptr ds : [ecx], edx
        lea edx, ds:[eax+4]
        lea ebp, ds:[ecx+4]
        cmp ebp, edx
        push esi
        push edi
        mov dword ptr ss : [esp+0x14], ecx
        je public_6ce3238
        mov esi, dword ptr ss : [ebp+4]
        mov eax, dword ptr ds : [esi]
        cmp eax, esi
        mov edx, dword ptr ds : [edx+4]
        mov ebx, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x10], edx
        je public_6ce31b5
        public_6ce31a3 : nop
        cmp ebx, edx
        je public_6ce31b5
        mov edi, dword ptr ds : [ebx+8]
        mov dword ptr ds : [eax+8], edi
        mov eax, dword ptr ds : [eax]
        cmp eax, esi
        mov ebx, dword ptr ds : [ebx]
        jne public_6ce31a3
        public_6ce31b5 : nop
        cmp eax, esi
        mov edi, eax
        je public_6ce31ef
        nop 
        lea esp, ss:[esp]
        public_6ce31c0 : nop
        mov eax, edi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6d5ffb0
        mov ecx, dword ptr ss : [ebp+8]
        add esp, 4
        dec ecx
        cmp edi, esi
        mov dword ptr ss : [ebp+8], ecx
        jne public_6ce31c0
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x10]
        public_6ce31ef : nop
        cmp ebx, edx
        je public_6ce3234
        public_6ce31f3 : nop
        mov edi, dword ptr ds : [esi+4]
        push 0xC
        call public_6d60012
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_6ce3208
        mov edi, eax
        public_6ce3208 : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_6ce321f
        mov edx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [eax], edx
        public_6ce321f : nop
        mov ecx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [esp+0x10]
        inc ecx
        mov dword ptr ss : [ebp+8], ecx
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, eax
        jne public_6ce31f3
        mov ecx, dword ptr ss : [esp+0x14]
        public_6ce3234 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        public_6ce3238 : nop
        mov edx, dword ptr ds : [eax+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [ecx+0x10], edx
        mov eax, dword ptr ds : [eax+0x14]
        pop ebp
        mov dword ptr ds : [ecx+0x14], eax
        mov eax, ecx
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6ce3170)
    }
}

#undef public_6ce31a3
#undef public_6ce31b5
#undef public_6ce31c0
#undef public_6ce31ef
#undef public_6ce31f3
#undef public_6ce3208
#undef public_6ce321f
#undef public_6ce3234
#undef public_6ce3238
