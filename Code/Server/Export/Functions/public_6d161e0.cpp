#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d161e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_JUMP_SYMBOL(public_6d61d1b);

#define public_6d16208 _public_6d16208
#define public_6d16211 _public_6d16211
#define public_6d16213 _public_6d16213
#define public_6d16230 _public_6d16230
#define public_6d16235 _public_6d16235
#define public_6d16240 _public_6d16240
#define public_6d16253 _public_6d16253
#define public_6d1625c _public_6d1625c
#define public_6d16260 _public_6d16260
#define public_6d16276 _public_6d16276
#define public_6d16289 _public_6d16289
#define public_6d16292 _public_6d16292
#define public_6d16296 _public_6d16296
#define public_6d162a3 _public_6d162a3
#define public_6d162b4 _public_6d162b4

PROC_DECLARE(0x6d161e0, internal_6d161e0, public_6d161e0);
extern "C" NAKED register_t __cdecl internal_6d161e0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d61d1b @0x6d161e2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d61d1b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0xC], esi
        xor ebx, ebx
        mov dword ptr ss : [esp+0x18], ebx
        xor edi, edi
        push ebp
        public_6d16208 : nop
        cmp edi, ebx
        jne public_6d16211
        mov edi, dword ptr ds : [esi+8]
        jmp public_6d16213
        public_6d16211 : nop
        mov edi, dword ptr ds : [edi]
        public_6d16213 : nop
        cmp edi, ebx
        je public_6d16235
        mov ebp, dword ptr ds : [edi+8]
        cmp ebp, ebx
        je public_6d16230
        lea ecx, ss:[ebp+0xC]
        call dword ptr ds : [public_6d64744]
        push ebp
        call public_6d5ffb0
        add esp, 4
        public_6d16230 : nop
        mov dword ptr ds : [edi+8], ebx
        jmp public_6d16208
        public_6d16235 : nop
        mov edi, dword ptr ds : [esi+8]
        cmp edi, ebx
        pop ebp
        je public_6d16260
        lea ecx, ds:[ecx]
        public_6d16240 : nop
        cmp byte ptr ds : [esi+0x10], bl
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        je public_6d16253
        mov ecx, dword ptr ds : [esi+0x14]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [esi+0x14], eax
        jmp public_6d1625c
        public_6d16253 : nop
        push eax
        call public_6d5ffb0
        add esp, 4
        public_6d1625c : nop
        cmp edi, ebx
        jne public_6d16240
        public_6d16260 : nop
        mov dword ptr ds : [esi+0xC], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi], ebx
        mov edi, dword ptr ds : [esi+8]
        cmp edi, ebx
        mov dword ptr ds : [esi+4], offset public_6d68348
        je public_6d16296
        public_6d16276 : nop
        cmp byte ptr ds : [esi+0x10], bl
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        je public_6d16289
        mov edx, dword ptr ds : [esi+0x14]
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [esi+0x14], eax
        jmp public_6d16292
        public_6d16289 : nop
        push eax
        call public_6d5ffb0
        add esp, 4
        public_6d16292 : nop
        cmp edi, ebx
        jne public_6d16276
        public_6d16296 : nop
        mov edi, dword ptr ds : [esi+0x14]
        cmp edi, ebx
        mov dword ptr ds : [esi+0xC], ebx
        mov dword ptr ds : [esi+8], ebx
        je public_6d162b4
        public_6d162a3 : nop
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        push eax
        call public_6d5ffb0
        add esp, 4
        cmp edi, ebx
        jne public_6d162a3
        public_6d162b4 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [esi+0x14], ebx
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6d161e0)
    }
}

#undef public_6d16208
#undef public_6d16211
#undef public_6d16213
#undef public_6d16230
#undef public_6d16235
#undef public_6d16240
#undef public_6d16253
#undef public_6d1625c
#undef public_6d16260
#undef public_6d16276
#undef public_6d16289
#undef public_6d16292
#undef public_6d16296
#undef public_6d162a3
#undef public_6d162b4
