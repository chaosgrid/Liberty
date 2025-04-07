#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb5660);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6faa278);

#define public_6eb5697 _public_6eb5697
#define public_6eb569f _public_6eb569f
#define public_6eb56a5 _public_6eb56a5
#define public_6eb56c2 _public_6eb56c2
#define public_6eb56ca _public_6eb56ca
#define public_6eb56d4 _public_6eb56d4
#define public_6eb5710 _public_6eb5710
#define public_6eb5725 _public_6eb5725
#define public_6eb5747 _public_6eb5747
#define public_6eb5759 _public_6eb5759

PROC_DECLARE(0x6eb5660, internal_6eb5660, public_6eb5660);
extern "C" NAKED register_t __cdecl internal_6eb5660()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6faa278 @0x6eb5662*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faa278
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x24]
        mov al, byte ptr ds : [esi]
        mov ebx, ecx
        push edi
        mov byte ptr ds : [ebx], al
        mov ecx, dword ptr ds : [esi+4]
        xor edi, edi
        cmp ecx, edi
        mov dword ptr ss : [esp+0x14], ebx
        jne public_6eb5697
        xor eax, eax
        jmp public_6eb569f
        public_6eb5697 : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 2
        public_6eb569f : nop
        cmp eax, edi
        jge public_6eb56a5
        xor eax, eax
        public_6eb56a5 : nop
        lea ecx, ds:[eax*4]
        push ecx
        call public_6fa912a
        mov dword ptr ds : [ebx+4], eax
        mov edx, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+4]
        add esp, 4
        cmp ecx, edx
        je public_6eb56d4
        public_6eb56c2 : nop
        cmp eax, edi
        je public_6eb56ca
        mov ebp, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], ebp
        public_6eb56ca : nop
        add ecx, 4
        add eax, 4
        cmp ecx, edx
        jne public_6eb56c2
        public_6eb56d4 : nop
        mov dword ptr ds : [ebx+8], eax
        mov dword ptr ds : [ebx+0xC], eax
        mov dl, byte ptr ds : [esi+0x10]
        push 0x34
        mov dword ptr ss : [esp+0x24], edi
        mov byte ptr ds : [ebx+0x10], dl
        call public_6fa912a
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [ebx+0x14], eax
        mov dword ptr ds : [ebx+0x18], edi
        mov ecx, dword ptr ds : [esi+0x14]
        mov ebp, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [eax]
        add esp, 4
        cmp ebp, ecx
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x28], esi
        je public_6eb5759
        lea esp, ss:[esp]
        public_6eb5710 : nop
        mov edi, dword ptr ds : [esi+4]
        push 0x34
        call public_6fa912a
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_6eb5725
        mov edi, eax
        public_6eb5725 : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_6eb5747
        mov ecx, 0xB
        lea esi, ss:[ebp+8]
        mov edi, eax
        rep movsd
        mov esi, dword ptr ss : [esp+0x28]
        public_6eb5747 : nop
        mov ecx, dword ptr ds : [ebx+0x18]
        mov eax, dword ptr ss : [esp+0x10]
        inc ecx
        mov dword ptr ds : [ebx+0x18], ecx
        mov ebp, dword ptr ss : [ebp]
        cmp ebp, eax
        jne public_6eb5710
        public_6eb5759 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 4
        UNREACHABLE_TRAP(0x6eb5660)
    }
}

#undef public_6eb5697
#undef public_6eb569f
#undef public_6eb56a5
#undef public_6eb56c2
#undef public_6eb56ca
#undef public_6eb56d4
#undef public_6eb5710
#undef public_6eb5725
#undef public_6eb5747
#undef public_6eb5759
