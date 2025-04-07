#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f20e00);
CLANG_FORWARD_PROC_SYMBOL(public_6f2fd50);
CLANG_FORWARD_PROC_SYMBOL(public_6f30830);
CLANG_FORWARD_PROC_SYMBOL(public_6f75840);
CLANG_FORWARD_PROC_SYMBOL(public_6f7b880);
CLANG_FORWARD_PROC_SYMBOL(public_6fa7e40);

#define public_6f75864 _public_6f75864
#define public_6f75879 _public_6f75879
#define public_6f758cf _public_6f758cf
#define public_6f758d3 _public_6f758d3
#define public_6f758f8 _public_6f758f8
#define public_6f75904 _public_6f75904
#define public_6f75916 _public_6f75916
#define public_6f75920 _public_6f75920
#define public_6f7592e _public_6f7592e
#define public_6f75934 _public_6f75934

PROC_DECLARE(0x6f75840, internal_6f75840, public_6f75840);
extern "C" NAKED register_t __cdecl internal_6f75840()
{
    __asm
    {
        sub esp, 0x10
        push ebp
        mov ebp, ecx
        dec dword ptr ss : [ebp+0x4C]
        jne public_6f75934
        mov edx, dword ptr ss : [ebp+0x110]
        push ebx
        mov ebx, dword ptr ss : [ebp+0x114]
        mov eax, ebx
        cmp eax, ebx
        push esi
        push edi
        je public_6f75879
        public_6f75864 : nop
        mov esi, eax
        mov edi, edx
        add eax, 0x1C
        mov ecx, 7
        add edx, 0x1C
        cmp eax, ebx
        rep movsd
        jne public_6f75864
        public_6f75879 : nop
        mov dword ptr ss : [ebp+0x114], edx
        mov edi, dword ptr ss : [ebp+0x74]
        mov ecx, dword ptr ss : [ebp+0x80]
        test ecx, ecx
        mov eax, dword ptr ds : [edi]
        lea esi, ss:[ebp+0x70]
        mov dword ptr ss : [esp+0x10], eax
        je public_6f758cf
        mov ecx, eax
        cmp eax, ecx
        jne public_6f758cf
        mov eax, dword ptr ds : [edi+4]
        push eax
        mov ecx, esi
        call public_6f2fd50
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], 0
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, esi
        call public_6f1df30
        jmp public_6f758f8
        public_6f758cf : nop
        cmp eax, edi
        je public_6f758f8
        public_6f758d3 : nop
        push 0
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea ecx, ss:[esp+0x18]
        call public_6f7b880
        mov edx, dword ptr ds : [eax]
        push edx
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, esi
        call public_6f20e00
        cmp dword ptr ss : [esp+0x10], edi
        jne public_6f758d3
        public_6f758f8 : nop
        mov ebx, dword ptr ss : [ebp+0x68]
        mov edi, dword ptr ss : [ebp+0x64]
        mov esi, ebx
        cmp esi, ebx
        je public_6f75916
        public_6f75904 : nop
        push esi
        mov ecx, edi
        call public_6fa7e40
        add esi, 0x5C
        add edi, 0x5C
        cmp esi, ebx
        jne public_6f75904
        public_6f75916 : nop
        mov ebx, dword ptr ss : [ebp+0x68]
        cmp edi, ebx
        mov esi, edi
        je public_6f7592e
        nop 
        public_6f75920 : nop
        mov ecx, esi
        call public_6f30830
        add esi, 0x5C
        cmp esi, ebx
        jne public_6f75920
        public_6f7592e : nop
        mov dword ptr ss : [ebp+0x68], edi
        pop edi
        pop esi
        pop ebx
        public_6f75934 : nop
        pop ebp
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f75840)
    }
}

#undef public_6f75864
#undef public_6f75879
#undef public_6f758cf
#undef public_6f758d3
#undef public_6f758f8
#undef public_6f75904
#undef public_6f75916
#undef public_6f75920
#undef public_6f7592e
#undef public_6f75934
