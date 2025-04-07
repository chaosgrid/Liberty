#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626ac10);
CLANG_FORWARD_PROC_SYMBOL(public_626acc0);
CLANG_FORWARD_PROC_SYMBOL(public_626b520);
CLANG_FORWARD_PROC_SYMBOL(public_6271cc0);
CLANG_FORWARD_PROC_SYMBOL(public_627f280);
CLANG_FORWARD_PROC_SYMBOL(public_62a1c30);
CLANG_FORWARD_PROC_SYMBOL(public_62be400);
CLANG_FORWARD_PROC_SYMBOL(public_632c410);

#define public_6264754 _public_6264754
#define public_6264766 _public_6264766
#define public_6264770 _public_6264770
#define public_6264787 _public_6264787
#define public_6264790 _public_6264790
#define public_62647a9 _public_62647a9
#define public_62647b1 _public_62647b1
#define public_62647dc _public_62647dc
#define public_6264849 _public_6264849
#define public_6264850 _public_6264850
#define public_6264875 _public_6264875
#define public_6264883 _public_6264883

PROC_DECLARE(0x6264730, internal_6264730, public_6264730);
extern "C" NAKED register_t __cdecl internal_6264730()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        push ebp
        mov ebp, ecx
        cmp ebp, ebx
        push esi
        push edi
        mov dword ptr ss : [esp+0x10], ebp
        je public_62647b1
        mov esi, dword ptr ss : [ebp+4]
        mov eax, dword ptr ds : [esi]
        cmp eax, esi
        mov ebp, dword ptr ds : [ebx+4]
        mov edi, dword ptr ss : [ebp]
        je public_6264766
        public_6264754 : nop
        cmp edi, ebp
        je public_6264766
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax+8], ecx
        mov eax, dword ptr ds : [eax]
        cmp eax, esi
        mov edi, dword ptr ds : [edi]
        jne public_6264754
        public_6264766 : nop
        cmp eax, esi
        mov ebx, eax
        je public_6264787
        lea esp, ss:[esp]
        public_6264770 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, ebx
        mov ebx, dword ptr ds : [ebx]
        push eax
        lea edx, ss:[esp+0x18]
        push edx
        call public_6271cc0
        cmp ebx, esi
        jne public_6264770
        public_6264787 : nop
        cmp edi, ebp
        je public_62647a9
        nop 
        lea esp, ss:[esp]
        public_6264790 : nop
        lea eax, ds:[edi+8]
        push eax
        push esi
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        call public_627f280
        mov edi, dword ptr ds : [edi]
        cmp edi, ebp
        jne public_6264790
        public_62647a9 : nop
        mov ebx, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x10]
        public_62647b1 : nop
        lea edi, ds:[ebx+0xC]
        lea esi, ss:[ebp+0xC]
        cmp esi, edi
        je public_62647dc
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea edx, ss:[esp+0x28]
        push edx
        mov ecx, esi
        call public_626ac10
        mov al, byte ptr ds : [edi+1]
        push edi
        mov ecx, esi
        mov byte ptr ds : [esi+1], al
        call public_626acc0
        public_62647dc : nop
        add ebx, 0x20
        lea esi, ss:[ebp+0x20]
        cmp esi, ebx
        je public_6264883
        mov edi, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        mov ecx, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x20], ecx
        je public_6264849
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, esi
        call public_632c410
        mov ecx, dword ptr ss : [esp+0x20]
        cmp ecx, dword ptr ds : [eax]
        jne public_6264849
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_6264849
        mov edx, dword ptr ds : [eax+4]
        push edx
        mov ecx, esi
        call public_626b520
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax+4], ecx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], 0
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        lea edx, ss:[esp+0x10]
        push edx
        mov ecx, esi
        mov dword ptr ds : [eax+8], eax
        call public_632c410
        jmp public_6264875
        public_6264849 : nop
        cmp ecx, edi
        je public_6264875
        lea ecx, ds:[ecx]
        public_6264850 : nop
        push 0
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x28]
        call public_62a1c30
        mov ecx, dword ptr ds : [eax]
        push ecx
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, esi
        call public_62be400
        cmp dword ptr ss : [esp+0x20], edi
        jne public_6264850
        public_6264875 : nop
        mov al, byte ptr ds : [ebx+1]
        push ebx
        mov ecx, esi
        mov byte ptr ds : [esi+1], al
        call public_626acc0
        public_6264883 : nop
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x6264730)
    }
}

#undef public_6264754
#undef public_6264766
#undef public_6264770
#undef public_6264787
#undef public_6264790
#undef public_62647a9
#undef public_62647b1
#undef public_62647dc
#undef public_6264849
#undef public_6264850
#undef public_6264875
#undef public_6264883
