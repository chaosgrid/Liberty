#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6623200);
CLANG_FORWARD_PROC_SYMBOL(public_6623cd0);
CLANG_FORWARD_PROC_SYMBOL(public_66240d0);
CLANG_FORWARD_PROC_SYMBOL(public_66252f0);
CLANG_FORWARD_PROC_SYMBOL(public_66281d0);

#define public_6623233 _public_6623233
#define public_6623267 _public_6623267
#define public_6623270 _public_6623270
#define public_6623279 _public_6623279
#define public_66232a5 _public_66232a5
#define public_66232a9 _public_66232a9
#define public_66232c9 _public_66232c9

PROC_DECLARE(0x6623200, internal_6623200, public_6623200);
extern "C" NAKED register_t __cdecl internal_6623200()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x10]
        push edi
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        je public_66232a5
        mov eax, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [eax]
        jne public_66232a5
        cmp ebx, eax
        jne public_66232a5
        mov ebx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [esi+8]
        cmp ebx, eax
        mov edi, ebx
        je public_6623279
        public_6623233 : nop
        mov eax, dword ptr ds : [edi+8]
        mov ecx, esi
        push eax
        call public_66240d0
        mov eax, dword ptr ds : [public_662b1a8]
        mov edi, dword ptr ds : [edi]
        cmp eax, 0x80
        jge public_6623267
        mov ecx, dword ptr ds : [public_662b19c]
        mov dword ptr ds : [ebx], ecx
        mov eax, dword ptr ds : [public_662b1a8]
        inc eax
        mov dword ptr ds : [public_662b19c], ebx
        mov dword ptr ds : [public_662b1a8], eax
        jmp public_6623270
        public_6623267 : nop
        push ebx
        call public_66281d0
        add esp, 4
        public_6623270 : nop
        mov eax, dword ptr ds : [esi+8]
        mov ebx, edi
        cmp edi, eax
        jne public_6623233
        public_6623279 : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi+8]
        pop edi
        mov dword ptr ds : [edx+4], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], 0
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ss : [esp+0xC]
        pop esi
        mov edx, dword ptr ds : [ecx]
        pop ebx
        mov dword ptr ds : [eax], edx
        ret 0xC
        public_66232a5 : nop
        cmp ecx, ebx
        je public_66232c9
        public_66232a9 : nop
        mov edi, ecx
        lea ecx, ss:[esp+0x14]
        call public_66252f0
        lea eax, ss:[esp+0x18]
        push edi
        push eax
        mov ecx, esi
        call public_6623cd0
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, ebx
        jne public_66232a9
        public_66232c9 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebx
        mov dword ptr ds : [eax], ecx
        ret 0xC
        UNREACHABLE_TRAP(0x6623200)
    }
}

#undef public_6623233
#undef public_6623267
#undef public_6623270
#undef public_6623279
#undef public_66232a5
#undef public_66232a9
#undef public_66232c9
