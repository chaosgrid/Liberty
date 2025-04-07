#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_632ca30);
CLANG_FORWARD_PROC_SYMBOL(public_632d550);
CLANG_FORWARD_PROC_SYMBOL(public_632d5e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_6397439);

#define public_632d660 _public_632d660
#define public_632d679 _public_632d679
#define public_632d684 _public_632d684
#define public_632d699 _public_632d699
#define public_632d6c5 _public_632d6c5

PROC_DECLARE(0x632d5e0, internal_632d5e0, public_632d5e0);
extern "C" NAKED register_t __cdecl internal_632d5e0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6397439 @0x632d5e2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6397439
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x30]
        mov dword ptr ss : [esp+0x14], edi
        xor ebp, ebp
        cmp edi, ebp
        mov dword ptr ss : [esp+0x28], ebp
        je public_632d6c5
        mov ebx, dword ptr ss : [esp+0x34]
        mov ax, word ptr ds : [ebx]
        mov cl, byte ptr ss : [esp+0x30]
        mov word ptr ds : [edi], ax
        add edi, 4
        push 0xC
        mov dword ptr ss : [esp+0x1C], edi
        mov byte ptr ds : [edi], cl
        call public_6391d9c
        mov esi, eax
        mov dword ptr ds : [esi], esi
        mov dword ptr ds : [esi+4], esi
        add esp, 4
        mov dword ptr ds : [edi+4], esi
        mov dword ptr ds : [edi+8], ebp
        mov ebp, dword ptr ds : [ebx+8]
        mov ebx, dword ptr ds : [esi]
        cmp ebx, esi
        mov eax, dword ptr ss : [ebp]
        mov byte ptr ss : [esp+0x28], 1
        mov dword ptr ss : [esp+0x10], ebp
        mov dword ptr ss : [esp+0x34], eax
        je public_632d679
        lea esp, ss:[esp]
        public_632d660 : nop
        mov eax, ebx
        mov ebx, dword ptr ds : [ebx]
        push eax
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, edi
        call public_632ca30
        cmp ebx, esi
        jne public_632d660
        mov eax, dword ptr ss : [esp+0x34]
        public_632d679 : nop
        cmp eax, ebp
        mov ecx, dword ptr ds : [edi+4]
        mov ebx, dword ptr ds : [ecx]
        mov esi, eax
        je public_632d6c5
        public_632d684 : nop
        mov ebp, dword ptr ds : [ebx+4]
        push 0xC
        call public_6391d9c
        add esp, 4
        test ebp, ebp
        mov dword ptr ds : [eax], ebx
        jne public_632d699
        mov ebp, eax
        public_632d699 : nop
        mov dword ptr ds : [eax+4], ebp
        mov dword ptr ds : [ebx+4], eax
        mov edx, dword ptr ds : [eax+4]
        lea ecx, ds:[esi+8]
        mov dword ptr ds : [edx], eax
        push ecx
        add eax, 8
        push eax
        call public_632d550
        mov ecx, dword ptr ds : [edi+8]
        mov eax, dword ptr ss : [esp+0x18]
        add esp, 8
        inc ecx
        mov dword ptr ds : [edi+8], ecx
        mov esi, dword ptr ds : [esi]
        cmp esi, eax
        jne public_632d684
        public_632d6c5 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x632d5e0)
    }
}

#undef public_632d660
#undef public_632d679
#undef public_632d684
#undef public_632d699
#undef public_632d6c5
