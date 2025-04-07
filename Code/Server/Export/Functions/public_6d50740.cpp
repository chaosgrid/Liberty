#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d50740);
CLANG_FORWARD_PROC_SYMBOL(public_6d50850);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);

#define public_6d50768 _public_6d50768
#define public_6d50774 _public_6d50774
#define public_6d50790 _public_6d50790
#define public_6d5079b _public_6d5079b
#define public_6d507a3 _public_6d507a3
#define public_6d507be _public_6d507be
#define public_6d50800 _public_6d50800
#define public_6d50824 _public_6d50824

PROC_DECLARE(0x6d50740, internal_6d50740, public_6d50740);
extern "C" NAKED register_t __cdecl internal_6d50740()
{
    __asm
    {
        sub esp, 0x10
        push ebx
        push ebp
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+0x398]
        push esi
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ss : [ebp+0x394]
        push edi
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        mov esi, 8
        mov dword ptr ss : [esp+0x10], esi
        je public_6d507be
        public_6d50768 : nop
        mov esi, dword ptr ds : [edi+8]
        test esi, esi
        mov ebx, 6
        je public_6d507a3
        public_6d50774 : nop
        movzx eax, word ptr ds : [esi+8]
        cmp eax, 0x21
        je public_6d50790
        xor ecx, ecx
        cmp eax, 0x4E
        sete cl
        dec ecx
        and ecx, 0xFFFFFFF0
        add ecx, 0x17
        mov eax, ecx
        jmp public_6d5079b
        public_6d50790 : nop
        mov ecx, dword ptr ds : [esi+4]
        call public_6d50850
        add eax, 3
        public_6d5079b : nop
        mov esi, dword ptr ds : [esi]
        add ebx, eax
        test esi, esi
        jne public_6d50774
        public_6d507a3 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edi, dword ptr ds : [edi]
        mov eax, dword ptr ss : [ebp+0x394]
        add ecx, ebx
        cmp edi, eax
        mov dword ptr ss : [esp+0x10], ecx
        jne public_6d50768
        mov esi, 8
        public_6d507be : nop
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        call public_6d60012
        mov edi, eax
        mov eax, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x18], edi
        mov dword ptr ss : [esp+0x1C], esi
        mov dword ptr ds : [edi], 1
        mov dword ptr ds : [edi+4], eax
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [ebp+0x394]
        add edx, esi
        mov dword ptr ss : [esp+0x18], edx
        mov esi, dword ptr ds : [eax]
        add esp, 4
        cmp esi, eax
        je public_6d50824
        mov ebx, dword ptr ds : [public_6d64964]
        mov edi, edi
        public_6d50800 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        push ecx
        lea edx, ss:[esp+0x1C]
        push edx
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ds:[esi+8]
        push ecx
        call ebx
        mov esi, dword ptr ds : [esi]
        mov eax, dword ptr ss : [ebp+0x394]
        add esp, 0x10
        cmp esi, eax
        jne public_6d50800
        public_6d50824 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov edx, dword ptr ds : [ecx]
        push eax
        mov eax, dword ptr ss : [esp+0x28]
        push edi
        push eax
        call dword ptr ds : [edx+0x184]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6d50740)
    }
}

#undef public_6d50768
#undef public_6d50774
#undef public_6d50790
#undef public_6d5079b
#undef public_6d507a3
#undef public_6d507be
#undef public_6d50800
#undef public_6d50824
