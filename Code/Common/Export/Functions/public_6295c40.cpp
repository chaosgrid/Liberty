#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6285b50);
CLANG_FORWARD_PROC_SYMBOL(public_6295c40);
CLANG_FORWARD_PROC_SYMBOL(public_6295e00);
CLANG_FORWARD_PROC_SYMBOL(public_6296640);
CLANG_FORWARD_PROC_SYMBOL(public_629aed0);
CLANG_FORWARD_PROC_SYMBOL(public_629f2c0);
CLANG_FORWARD_PROC_SYMBOL(public_630eb70);
CLANG_FORWARD_PROC_SYMBOL(public_6333e30);
CLANG_FORWARD_JUMP_SYMBOL(public_6393797);

#define public_6295d17 _public_6295d17
#define public_6295db0 _public_6295db0
#define public_6295dc5 _public_6295dc5
#define public_6295ddc _public_6295ddc
#define public_6295de2 _public_6295de2

PROC_DECLARE(0x6295c40, internal_6295c40, public_6295c40);
extern "C" NAKED register_t __cdecl internal_6295c40()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6393797 @0x6295c42*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6393797
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x9C
        mov eax, dword ptr ss : [esp+0xB8]
        mov edx, dword ptr ss : [esp+0xB0]
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0xB8]
        push edi
        mov ebp, ecx
        mov ecx, dword ptr ss : [esp+0xC4]
        push eax
        push ecx
        push edx
        push esi
        push 0x20000
        mov ecx, ebp
        mov dword ptr ss : [esp+0x38], ebp
        call public_629f2c0
        lea edi, ss:[ebp+0x20]
        mov ecx, edi
        mov dword ptr ss : [esp+0xB4], 0
        call public_6285b50
        mov byte ptr ds : [edi+0x10], 0
        mov dword ptr ds : [edi], offset public_639be28
        mov al, byte ptr ss : [esp+0x17]
        lea ebx, ss:[ebp+0x34]
        mov byte ptr ds : [ebx], al
        xor eax, eax
        mov dword ptr ds : [ebx+4], eax
        mov dword ptr ds : [ebx+8], eax
        mov dword ptr ds : [ebx+0xC], eax
        lea ecx, ss:[esp+0x1C]
        mov byte ptr ss : [esp+0xB4], 2
        mov dword ptr ss : [ebp+0x44], eax
        mov dword ptr ss : [ebp+0x4C], eax
        mov dword ptr ss : [ebp+0x50], eax
        mov byte ptr ss : [ebp+0x54], al
        mov dword ptr ss : [ebp], offset public_639ce6c
        mov dword ptr ds : [edi], offset public_639ce3c
        call public_6333e30
        mov ecx, dword ptr ds : [esi+0x88]
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        mov eax, dword ptr ds : [ecx+0xFC]
        mov ecx, 1
        cmp eax, ecx
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+0x18], ecx
        jl public_6295dc5
        public_6295d17 : nop
        push ecx
        lea edx, ss:[esp+0x20]
/*FIXUP push offset public_639cec4 @0x6295d1c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639cec4
        push edx
        call public_6295e00
        mov eax, dword ptr ss : [ebp+4]
        mov eax, dword ptr ds : [eax+4]
        lea ecx, ss:[esp+0x34]
        push ecx
        mov ecx, dword ptr ss : [esp+0x2C]
        lea edx, ss:[esp+0x20]
        push edx
        push ecx
        push eax
        call public_630eb70
        add esp, 0x1C
        test al, al
        je public_6295db0
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [esi]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0xF4]
        mov edx, dword ptr ds : [ebx+8]
        lea ecx, ss:[esp+0x70]
        push ecx
        push 1
        push edx
        mov ecx, ebx
        mov esi, eax
        call public_6296640
        mov eax, dword ptr ss : [ebp+0x3C]
        mov ecx, dword ptr ss : [esp+0x18]
        mov word ptr ds : [eax-0x3C], si
        sub eax, 0x3C
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax+8], edx
        lea edi, ds:[eax+0xC]
        mov ecx, 9
        lea esi, ss:[esp+0x38]
        rep movsd
        mov ecx, dword ptr ss : [esp+0x2C]
        mov esi, dword ptr ss : [esp+0xBC]
        add eax, 0x30
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ss : [esp+0x30]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ss : [esp+0x34]
        mov dword ptr ds : [eax+8], ecx
        public_6295db0 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x20]
        inc ecx
        cmp ecx, eax
        mov dword ptr ss : [esp+0x18], ecx
        jle public_6295d17
        public_6295dc5 : nop
        push 1
        mov ecx, ebp
        call public_629aed0
        test al, al
        mov ecx, ebp
        je public_6295ddc
        mov edx, dword ptr ss : [ebp]
        call dword ptr ds : [edx+0x4C]
        jmp public_6295de2
        public_6295ddc : nop
        mov eax, dword ptr ss : [ebp]
        call dword ptr ds : [eax+0x50]
        public_6295de2 : nop
        mov ecx, dword ptr ss : [esp+0xAC]
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0xA8
        ret 0x10
        UNREACHABLE_TRAP(0x6295c40)
    }
}

#undef public_6295d17
#undef public_6295db0
#undef public_6295dc5
#undef public_6295ddc
#undef public_6295de2
