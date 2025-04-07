#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1b490);
CLANG_FORWARD_PROC_SYMBOL(public_6d45e50);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_JUMP_SYMBOL(public_6d62f4d);

#define public_6d45e90 _public_6d45e90
#define public_6d45ea6 _public_6d45ea6
#define public_6d45ed5 _public_6d45ed5
#define public_6d45efa _public_6d45efa
#define public_6d45f29 _public_6d45f29
#define public_6d45f35 _public_6d45f35
#define public_6d45f64 _public_6d45f64
#define public_6d45f70 _public_6d45f70

PROC_DECLARE(0x6d45e50, internal_6d45e50, public_6d45e50);
extern "C" NAKED register_t __cdecl internal_6d45e50()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d62f4d @0x6d45e52*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d62f4d
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        push edi
        mov dword ptr ss : [esp+0x14], ebp
        mov ebx, dword ptr ss : [ebp+0x258]
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        lea edi, ss:[ebp+0x254]
        mov dword ptr ss : [esp+0x28], 2
        je public_6d45ea6
        lea esp, ss:[esp]
        public_6d45e90 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, edi
        call dword ptr ds : [public_6d643d0]
        cmp esi, ebx
        jne public_6d45e90
        public_6d45ea6 : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6d5ffb0
        xor ebx, ebx
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov edi, dword ptr ss : [ebp+0x24C]
        mov eax, dword ptr ds : [edi]
        lea esi, ss:[ebp+0x248]
        add esp, 4
        cmp eax, edi
        mov byte ptr ss : [esp+0x28], 1
        mov dword ptr ss : [esp+0x10], eax
        je public_6d45efa
        public_6d45ed5 : nop
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea ecx, ss:[esp+0x18]
        call public_6d1b490
        mov edx, dword ptr ds : [eax]
        push edx
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, esi
        call dword ptr ds : [public_6d64870]
        cmp dword ptr ss : [esp+0x10], edi
        jne public_6d45ed5
        public_6d45efa : nop
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_6d5ffb0
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ss : [ebp+0x218]
        add esp, 4
        cmp eax, ebx
        je public_6d45f35
        mov cl, byte ptr ds : [eax-1]
        cmp cl, bl
        je public_6d45f29
        cmp cl, 0xFF
        je public_6d45f29
        dec cl
        mov byte ptr ds : [eax-1], cl
        jmp public_6d45f35
        public_6d45f29 : nop
        add eax, 0xFFFFFFFE
        push eax
        call public_6d5ffb0
        add esp, 4
        public_6d45f35 : nop
        mov dword ptr ss : [ebp+0x218], ebx
        mov dword ptr ss : [ebp+0x21C], ebx
        mov dword ptr ss : [ebp+0x220], ebx
        mov eax, dword ptr ss : [ebp+0x208]
        cmp eax, ebx
        je public_6d45f70
        mov cl, byte ptr ds : [eax-1]
        cmp cl, bl
        je public_6d45f64
        cmp cl, 0xFF
        je public_6d45f64
        dec cl
        mov byte ptr ds : [eax-1], cl
        jmp public_6d45f70
        public_6d45f64 : nop
        add eax, 0xFFFFFFFE
        push eax
        call public_6d5ffb0
        add esp, 4
        public_6d45f70 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        pop edi
        mov dword ptr ss : [ebp+0x208], ebx
        mov dword ptr ss : [ebp+0x20C], ebx
        mov dword ptr ss : [ebp+0x210], ebx
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x6d45e50)
    }
}

#undef public_6d45e90
#undef public_6d45ea6
#undef public_6d45ed5
#undef public_6d45efa
#undef public_6d45f29
#undef public_6d45f35
#undef public_6d45f64
#undef public_6d45f70
