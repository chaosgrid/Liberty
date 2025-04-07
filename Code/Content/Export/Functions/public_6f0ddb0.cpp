#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f0ddb0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f0dde0 _public_6f0dde0
#define public_6f0ddfa _public_6f0ddfa
#define public_6f0de00 _public_6f0de00
#define public_6f0de2f _public_6f0de2f
#define public_6f0de33 _public_6f0de33
#define public_6f0de4b _public_6f0de4b
#define public_6f0de64 _public_6f0de64
#define public_6f0de74 _public_6f0de74
#define public_6f0de78 _public_6f0de78

PROC_DECLARE(0x6f0ddb0, internal_6f0ddb0, public_6f0ddb0);
extern "C" NAKED register_t __cdecl internal_6f0ddb0()
{
    __asm
    {
        push ecx
        push ebx
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+0xC]
        cmp eax, ecx
        push ebp
        push esi
        push edi
        mov dword ptr ss : [esp+0x10], eax
        je public_6f0de78
        mov ebx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [ebx]
        cmp eax, ebx
        mov edx, dword ptr ds : [ecx+4]
        mov ebp, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x18], edx
        je public_6f0ddfa
        lea esp, ss:[esp]
        public_6f0dde0 : nop
        cmp ebp, edx
        je public_6f0ddfa
        lea edi, ds:[eax+8]
        mov eax, dword ptr ds : [eax]
        cmp eax, ebx
        lea esi, ss:[ebp+8]
        mov ecx, 9
        rep movsd
        mov ebp, dword ptr ss : [ebp]
        jne public_6f0dde0
        public_6f0ddfa : nop
        cmp eax, ebx
        mov esi, eax
        je public_6f0de2f
        public_6f0de00 : nop
        mov eax, esi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax+8]
        add esp, 4
        dec ecx
        cmp esi, ebx
        mov dword ptr ds : [eax+8], ecx
        jne public_6f0de00
        mov edx, dword ptr ss : [esp+0x18]
        public_6f0de2f : nop
        cmp ebp, edx
        je public_6f0de74
        public_6f0de33 : nop
        mov edi, dword ptr ds : [ebx+4]
        push 0x2C
        lea esi, ss:[ebp+8]
        call public_6fa912a
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], ebx
        jne public_6f0de4b
        mov edi, eax
        public_6f0de4b : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [ebx+4], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edi, ds:[eax+8]
        test edi, edi
        mov dword ptr ds : [ecx], eax
        je public_6f0de64
        mov ecx, 9
        rep movsd
        public_6f0de64 : nop
        mov eax, dword ptr ss : [esp+0x10]
        inc dword ptr ds : [eax+8]
        mov ebp, dword ptr ss : [ebp]
        cmp ebp, dword ptr ss : [esp+0x18]
        jne public_6f0de33
        public_6f0de74 : nop
        mov eax, dword ptr ss : [esp+0x10]
        public_6f0de78 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6f0ddb0)
    }
}

#undef public_6f0dde0
#undef public_6f0ddfa
#undef public_6f0de00
#undef public_6f0de2f
#undef public_6f0de33
#undef public_6f0de4b
#undef public_6f0de64
#undef public_6f0de74
#undef public_6f0de78
