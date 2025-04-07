#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_6395c48);

#define public_62fec42 _public_62fec42
#define public_62fec50 _public_62fec50
#define public_62fec5b _public_62fec5b
#define public_62fec7b _public_62fec7b
#define public_62fec83 _public_62fec83

PROC_DECLARE(0x62febf0, internal_62febf0, public_62febf0);
extern "C" NAKED register_t __cdecl internal_62febf0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6395c48 @0x62febf2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6395c48
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        mov al, byte ptr ss : [esp+3]
        push ebx
        push esi
        mov esi, ecx
        xor ebx, ebx
        push edi
        mov dword ptr ss : [esp+0x10], esi
        mov byte ptr ds : [esi], al
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        push 0x80
        mov dword ptr ss : [esp+0x20], ebx
        call public_6391d9c
        mov edx, dword ptr ds : [esi+8]
        mov edi, eax
        mov eax, dword ptr ds : [esi+4]
        add esp, 4
        cmp eax, edx
        mov ecx, edi
        je public_62fec5b
        push ebp
        public_62fec42 : nop
        cmp ecx, ebx
        je public_62fec50
        mov ebp, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], ebp
        mov ebp, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], ebp
        public_62fec50 : nop
        add eax, 8
        add ecx, 8
        cmp eax, edx
        jne public_62fec42
        pop ebp
        public_62fec5b : nop
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_6391d5a
        mov ecx, dword ptr ds : [esi+4]
        add esp, 4
        cmp ecx, ebx
        lea edx, ds:[edi+0x80]
        mov dword ptr ds : [esi+0xC], edx
        jne public_62fec7b
        xor eax, eax
        jmp public_62fec83
        public_62fec7b : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 3
        public_62fec83 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        lea eax, ds:[edi+eax*8]
        mov dword ptr ds : [esi+4], edi
        mov dword ptr ds : [esi+8], eax
        pop edi
        mov dword ptr ds : [esi+0x10], 0x41A00000
        mov dword ptr ds : [esi+0x14], 0x44A00000
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x62febf0)
    }
}

#undef public_62fec42
#undef public_62fec50
#undef public_62fec5b
#undef public_62fec7b
#undef public_62fec83
