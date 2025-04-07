#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ced210);
CLANG_FORWARD_PROC_SYMBOL(public_6d4fc30);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);

#define public_6d4fc70 _public_6d4fc70
#define public_6d4fc91 _public_6d4fc91
#define public_6d4fc97 _public_6d4fc97
#define public_6d4fcc2 _public_6d4fcc2
#define public_6d4fcd0 _public_6d4fcd0
#define public_6d4fce5 _public_6d4fce5
#define public_6d4fd11 _public_6d4fd11

PROC_DECLARE(0x6d4fc30, internal_6d4fc30, public_6d4fc30);
extern "C" NAKED register_t __cdecl internal_6d4fc30()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x264]
        sub esp, 8
        push ebx
        push ebp
        lea edx, ds:[ecx+0x278]
        lea ebp, ds:[ecx+0x328]
        cmp ebp, edx
        push esi
        push edi
        mov dword ptr ds : [ecx+0x324], eax
        je public_6d4fd11
        mov ebx, dword ptr ss : [ebp+4]
        mov edx, dword ptr ds : [edx+4]
        mov eax, dword ptr ds : [ebx]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x14], edx
        mov edx, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x10], edx
        je public_6d4fc91
        lea ecx, ds:[ecx]
        public_6d4fc70 : nop
        cmp edx, dword ptr ss : [esp+0x14]
        je public_6d4fc91
        lea esi, ds:[edx+8]
        lea edi, ds:[eax+8]
        mov eax, dword ptr ds : [eax]
        cmp eax, ebx
        mov ecx, 8
        rep movsd
        mov ecx, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x10], ecx
        mov edx, ecx
        jne public_6d4fc70
        public_6d4fc91 : nop
        cmp eax, ebx
        mov esi, eax
        je public_6d4fcc2
        public_6d4fc97 : nop
        mov eax, esi
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [edx], ecx
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [edx+4], ecx
        call public_6d5ffb0
        mov ecx, dword ptr ss : [ebp+8]
        add esp, 4
        dec ecx
        cmp esi, ebx
        mov dword ptr ss : [ebp+8], ecx
        jne public_6d4fc97
        mov edx, dword ptr ss : [esp+0x10]
        public_6d4fcc2 : nop
        cmp edx, dword ptr ss : [esp+0x14]
        mov esi, edx
        je public_6d4fd11
        lea ebx, ds:[ebx]
        public_6d4fcd0 : nop
        mov edi, dword ptr ds : [ebx+4]
        push 0x28
        call public_6d60012
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], ebx
        jne public_6d4fce5
        mov edi, eax
        public_6d4fce5 : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [ebx+4], eax
        mov edx, dword ptr ds : [eax+4]
        lea ecx, ds:[esi+8]
        mov dword ptr ds : [edx], eax
        push ecx
        add eax, 8
        push eax
        call public_6ced210
        mov ecx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [esp+0x1C]
        add esp, 8
        inc ecx
        mov dword ptr ss : [ebp+8], ecx
        mov esi, dword ptr ds : [esi]
        cmp esi, eax
        jne public_6d4fcd0
        public_6d4fd11 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6d4fc30)
    }
}

#undef public_6d4fc70
#undef public_6d4fc91
#undef public_6d4fc97
#undef public_6d4fcc2
#undef public_6d4fcd0
#undef public_6d4fce5
#undef public_6d4fd11
