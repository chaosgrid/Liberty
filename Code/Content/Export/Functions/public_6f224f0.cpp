#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecfec0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0230);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f224f0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8370);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fadeb9);

#define public_6f22570 _public_6f22570
#define public_6f22589 _public_6f22589
#define public_6f225b0 _public_6f225b0
#define public_6f225ca _public_6f225ca
#define public_6f225e6 _public_6f225e6
#define public_6f225f0 _public_6f225f0
#define public_6f225fe _public_6f225fe

PROC_DECLARE(0x6f224f0, internal_6f224f0, public_6f224f0);
extern "C" NAKED register_t __cdecl internal_6f224f0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fadeb9 @0x6f224f2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fadeb9
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        mov eax, dword ptr ss : [esp+0x20]
        push ebx
        push esi
        push edi
        mov dword ptr ss : [esp+0x10], eax
        xor ebx, ebx
        cmp eax, ebx
        mov dword ptr ss : [esp+0x24], ebx
        je public_6f225fe
        mov ecx, dword ptr ss : [esp+0x30]
        mov edx, dword ptr ds : [ecx]
        lea esi, ds:[eax+4]
        mov dword ptr ds : [eax], edx
        mov al, byte ptr ss : [esp+0x2C]
        push ebp
        push 0xC
        lea ebp, ds:[ecx+4]
        mov dword ptr ss : [esp+0x1C], esi
        mov byte ptr ds : [esi], al
        call public_6fa912a
        mov edi, eax
        mov dword ptr ds : [edi], edi
        mov dword ptr ds : [edi+4], edi
        add esp, 4
        mov dword ptr ds : [esi+4], edi
        mov dword ptr ds : [esi+8], ebx
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, esi
        mov byte ptr ss : [esp+0x2C], 1
        call public_6f1df30
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        je public_6f22589
        lea ebx, ds:[ebx]
        public_6f22570 : nop
        mov eax, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+4]
        mov eax, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x10], eax
        jne public_6f22570
        public_6f22589 : nop
        mov ecx, esi
        call public_6ecfec0
        cmp esi, ebp
        je public_6f225e6
        mov ebx, dword ptr ds : [esi+4]
        mov edi, dword ptr ds : [ebx]
        lea ecx, ss:[esp+0x34]
        push ecx
        mov ecx, ebp
        call public_6f1df30
        cmp edi, ebx
        mov ebp, dword ptr ss : [ebp+4]
        je public_6f225ca
        mov eax, dword ptr ss : [esp+0x34]
        public_6f225b0 : nop
        cmp eax, ebp
        je public_6f225ca
        mov edx, dword ptr ds : [eax+8]
        mov dword ptr ds : [edi+8], edx
        mov eax, dword ptr ss : [esp+0x34]
        mov edi, dword ptr ds : [edi]
        cmp edi, ebx
        mov eax, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x34], eax
        jne public_6f225b0
        public_6f225ca : nop
        push ebx
        push edi
        lea ecx, ss:[esp+0x24]
        push ecx
        mov ecx, esi
        call public_6fa8370
        mov edx, dword ptr ss : [esp+0x34]
        push ebp
        push edx
        push ebx
        mov ecx, esi
        call public_6ed0230
        public_6f225e6 : nop
        mov eax, dword ptr ds : [esi+4]
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        pop ebp
        je public_6f225fe
        public_6f225f0 : nop
        mov ecx, dword ptr ds : [edi+8]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax]
        mov edi, dword ptr ds : [edi]
        cmp edi, dword ptr ds : [esi+4]
        jne public_6f225f0
        public_6f225fe : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x6f224f0)
    }
}

#undef public_6f22570
#undef public_6f22589
#undef public_6f225b0
#undef public_6f225ca
#undef public_6f225e6
#undef public_6f225f0
#undef public_6f225fe
