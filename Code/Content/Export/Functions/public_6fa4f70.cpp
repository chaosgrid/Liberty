#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa4f70);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb2161);

#define public_6fa4faa _public_6fa4faa
#define public_6fa4fac _public_6fa4fac
#define public_6fa4fbc _public_6fa4fbc
#define public_6fa4fc1 _public_6fa4fc1
#define public_6fa4fc7 _public_6fa4fc7
#define public_6fa4fe0 _public_6fa4fe0
#define public_6fa4fe8 _public_6fa4fe8
#define public_6fa4fee _public_6fa4fee
#define public_6fa4ffd _public_6fa4ffd

PROC_DECLARE(0x6fa4f70, internal_6fa4f70, public_6fa4f70);
extern "C" NAKED register_t __cdecl internal_6fa4f70()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fb2161 @0x6fa4f72*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb2161
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebp
        mov ebp, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+4], ebp
        test ebp, ebp
        mov dword ptr ss : [esp+0x10], 0
        je public_6fa4ffd
        mov eax, dword ptr ss : [esp+0x1C]
        test eax, eax
        push esi
        push edi
        je public_6fa4faa
        lea esi, ds:[eax+4]
        jmp public_6fa4fac
        public_6fa4faa : nop
        xor esi, esi
        public_6fa4fac : nop
        mov al, byte ptr ds : [esi]
        mov byte ptr ss : [ebp+4], al
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        jne public_6fa4fbc
        xor eax, eax
        jmp public_6fa4fc1
        public_6fa4fbc : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        public_6fa4fc1 : nop
        test eax, eax
        jge public_6fa4fc7
        xor eax, eax
        public_6fa4fc7 : nop
        push eax
        call public_6fa912a
        mov dword ptr ss : [ebp+8], eax
        mov edi, dword ptr ds : [esi+8]
        mov ecx, eax
        mov eax, dword ptr ds : [esi+4]
        add esp, 4
        cmp eax, edi
        je public_6fa4fee
        nop 
        public_6fa4fe0 : nop
        test ecx, ecx
        je public_6fa4fe8
        mov dl, byte ptr ds : [eax]
        mov byte ptr ds : [ecx], dl
        public_6fa4fe8 : nop
        inc ecx
        inc eax
        cmp eax, edi
        jne public_6fa4fe0
        public_6fa4fee : nop
        pop edi
        mov dword ptr ss : [ebp+0xC], ecx
        mov dword ptr ss : [ebp+0x10], ecx
        mov dword ptr ss : [ebp], offset public_6fb7750
        pop esi
        public_6fa4ffd : nop
        mov ecx, dword ptr ss : [esp+8]
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6fa4f70)
    }
}

#undef public_6fa4faa
#undef public_6fa4fac
#undef public_6fa4fbc
#undef public_6fa4fc1
#undef public_6fa4fc7
#undef public_6fa4fe0
#undef public_6fa4fe8
#undef public_6fa4fee
#undef public_6fa4ffd
