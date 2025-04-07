#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6343fb0);
CLANG_FORWARD_PROC_SYMBOL(public_6356a70);
CLANG_FORWARD_PROC_SYMBOL(public_6378a10);
CLANG_FORWARD_PROC_SYMBOL(public_637a750);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_JUMP_SYMBOL(public_6398a06);

#define public_637a782 _public_637a782
#define public_637a798 _public_637a798
#define public_637a7af _public_637a7af
#define public_637a7b6 _public_637a7b6
#define public_637a7c7 _public_637a7c7
#define public_637a7e0 _public_637a7e0
#define public_637a7ec _public_637a7ec
#define public_637a803 _public_637a803
#define public_637a81a _public_637a81a
#define public_637a821 _public_637a821
#define public_637a840 _public_637a840
#define public_637a847 _public_637a847
#define public_637a86a _public_637a86a
#define public_637a871 _public_637a871

PROC_DECLARE(0x637a750, internal_637a750, public_637a750);
extern "C" NAKED register_t __cdecl internal_637a750()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6398a06 @0x637a752*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6398a06
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
        mov eax, dword ptr ds : [esi+0x1C]
        xor ebx, ebx
        xor edi, edi
        cmp eax, ebx
        mov dword ptr ss : [esp+0x18], 1
        jle public_637a798
        public_637a782 : nop
        mov eax, dword ptr ds : [esi+0x2C]
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+edi*4]
        call public_6378a10
        mov eax, dword ptr ds : [esi+0x1C]
        inc edi
        cmp edi, eax
        jl public_637a782
        public_637a798 : nop
        mov eax, dword ptr ds : [esi+8]
        lea edx, ds:[esi+0xC]
        cmp eax, edx
        je public_637a7b6
        cmp eax, ebx
        je public_637a7af
        push eax
        call public_6343fb0
        add esp, 4
        public_637a7af : nop
        mov dword ptr ds : [esi+8], ebx
        mov word ptr ds : [esi+4], bx
        public_637a7b6 : nop
        mov word ptr ds : [esi+6], bx
        mov ecx, dword ptr ds : [esi]
        cmp ecx, ebx
        je public_637a7c7
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax+4]
        public_637a7c7 : nop
        mov edi, dword ptr ds : [esi+0x20]
        cmp edi, ebx
        mov dword ptr ds : [esi], ebx
        je public_637a7e0
        mov ecx, edi
        call public_6356a70
        push edi
        call public_6391d5a
        add esp, 4
        public_637a7e0 : nop
        mov eax, dword ptr ds : [esi+0x1C]
        xor edi, edi
        cmp eax, ebx
        mov dword ptr ds : [esi+0x20], ebx
        jle public_637a803
        public_637a7ec : nop
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [ecx+edi*4]
        push eax
        call public_6391d5a
        mov eax, dword ptr ds : [esi+0x1C]
        add esp, 4
        inc edi
        cmp edi, eax
        jl public_637a7ec
        public_637a803 : nop
        mov eax, dword ptr ds : [esi+0x10]
        lea edx, ds:[esi+0x14]
        cmp eax, edx
        je public_637a821
        cmp eax, ebx
        je public_637a81a
        push eax
        call public_6343fb0
        add esp, 4
        public_637a81a : nop
        mov dword ptr ds : [esi+0x10], ebx
        mov word ptr ds : [esi+0xC], bx
        public_637a821 : nop
        mov word ptr ds : [esi+0xE], bx
        mov eax, dword ptr ds : [esi+0x10]
        lea ecx, ds:[esi+0x14]
        cmp eax, ecx
        mov byte ptr ss : [esp+0x18], bl
        je public_637a847
        cmp eax, ebx
        je public_637a840
        push eax
        call public_6343fb0
        add esp, 4
        public_637a840 : nop
        mov dword ptr ds : [esi+0x10], ebx
        mov word ptr ds : [esi+0xC], bx
        public_637a847 : nop
        mov word ptr ds : [esi+0xE], bx
        mov eax, dword ptr ds : [esi+8]
        lea edx, ds:[esi+0xC]
        cmp eax, edx
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        je public_637a871
        cmp eax, ebx
        je public_637a86a
        push eax
        call public_6343fb0
        add esp, 4
        public_637a86a : nop
        mov dword ptr ds : [esi+8], ebx
        mov word ptr ds : [esi+4], bx
        public_637a871 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov word ptr ds : [esi+6], bx
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x637a750)
    }
}

#undef public_637a782
#undef public_637a798
#undef public_637a7af
#undef public_637a7b6
#undef public_637a7c7
#undef public_637a7e0
#undef public_637a7ec
#undef public_637a803
#undef public_637a81a
#undef public_637a821
#undef public_637a840
#undef public_637a847
#undef public_637a86a
#undef public_637a871
