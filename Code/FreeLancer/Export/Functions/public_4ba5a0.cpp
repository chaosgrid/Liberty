#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4ba5a0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5bd3c2);

#define public_4ba5d2 _public_4ba5d2
#define public_4ba5f0 _public_4ba5f0
#define public_4ba609 _public_4ba609
#define public_4ba618 _public_4ba618
#define public_4ba631 _public_4ba631
#define public_4ba640 _public_4ba640
#define public_4ba659 _public_4ba659
#define public_4ba667 _public_4ba667
#define public_4ba689 _public_4ba689
#define public_4ba75d _public_4ba75d
#define public_4ba77a _public_4ba77a
#define public_4ba79a _public_4ba79a
#define public_4ba7a3 _public_4ba7a3
#define public_4ba7a6 _public_4ba7a6
#define public_4ba7b2 _public_4ba7b2

PROC_DECLARE(0x4ba5a0, internal_4ba5a0, public_4ba5a0);
extern "C" NAKED register_t __cdecl internal_4ba5a0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5bd3c2 @0x4ba5a8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bd3c2
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr fs : [0], esp
        sub esp, 0x34
        push ebx
        push esi
        mov esi, dword ptr ds : [eax]
        xor ebx, ebx
        cmp esi, ebx
        je public_4ba7b2
        push ebp
        mov ebp, dword ptr ds : [public_5c6098]
        push edi
        public_4ba5d2 : nop
        movzx eax, word ptr ds : [esi+8]
        add eax, 0xFFFFFFDF
        cmp eax, 0x39
        ja public_4ba7a6
/*FIXUP movzx ecx, byte ptr ds : [eax+public_4ba7e8] @0x4ba5e2*/
/*FIXUP jmp dword ptr ds : [ecx*4+public_4ba7c4] @0x4ba5e9*/
  JMPTB cmp eax, 0
  JMPTB mov ecx, 0
  JMPTB je public_4ba79a
  JMPTB cmp eax, 1
  JMPTB mov ecx, 8
  JMPTB je public_4ba7a6
  JMPTB cmp eax, 2
  JMPTB mov ecx, 8
  JMPTB je public_4ba7a6
  JMPTB cmp eax, 3
  JMPTB mov ecx, 8
  JMPTB je public_4ba7a6
  JMPTB cmp eax, 4
  JMPTB mov ecx, 8
  JMPTB je public_4ba7a6
  JMPTB cmp eax, 5
  JMPTB mov ecx, 8
  JMPTB je public_4ba7a6
  JMPTB cmp eax, 6
  JMPTB mov ecx, 8
  JMPTB je public_4ba7a6
  JMPTB cmp eax, 7
  JMPTB mov ecx, 8
  JMPTB je public_4ba7a6
  JMPTB cmp eax, 8
  JMPTB mov ecx, 8
  JMPTB je public_4ba7a6
  JMPTB cmp eax, 9
  JMPTB mov ecx, 8
  JMPTB je public_4ba7a6
  JMPTB cmp eax, 0xA
  JMPTB mov ecx, 8
  JMPTB je public_4ba7a6
  JMPTB cmp eax, 0xB
  JMPTB mov ecx, 8
  JMPTB je public_4ba7a6
  JMPTB cmp eax, 0xC
  JMPTB mov ecx, 8
  JMPTB je public_4ba7a6
  JMPTB cmp eax, 0xD
  JMPTB mov ecx, 8
  JMPTB je public_4ba7a6
  JMPTB cmp eax, 0xE
  JMPTB mov ecx, 8
  JMPTB je public_4ba7a6
  JMPTB cmp eax, 0xF
  JMPTB mov ecx, 8
  JMPTB je public_4ba7a6
  JMPTB cmp eax, 0x10
  JMPTB mov ecx, 8
  JMPTB je public_4ba7a6
  JMPTB cmp eax, 0x11
  JMPTB mov ecx, 8
  JMPTB je public_4ba7a6
  JMPTB cmp eax, 0x12
  JMPTB mov ecx, 8
  JMPTB je public_4ba7a6
  JMPTB cmp eax, 0x13
  JMPTB mov ecx, 8
  JMPTB je public_4ba7a6
  JMPTB cmp eax, 0x14
  JMPTB mov ecx, 8
  JMPTB je public_4ba7a6
  JMPTB cmp eax, 0x15
  JMPTB mov ecx, 8
  JMPTB je public_4ba7a6
  JMPTB cmp eax, 0x16
  JMPTB mov ecx, 8
  JMPTB je public_4ba7a6
  JMPTB cmp eax, 0x17
  JMPTB mov ecx, 8
  JMPTB je public_4ba7a6
  JMPTB cmp eax, 0x18
  JMPTB mov ecx, 8
  JMPTB je public_4ba7a6
  JMPTB cmp eax, 0x19
  JMPTB mov ecx, 8
  JMPTB je public_4ba7a6
  JMPTB cmp eax, 0x1A
  JMPTB mov ecx, 8
  JMPTB je public_4ba7a6
  JMPTB cmp eax, 0x1B
  JMPTB mov ecx, 8
  JMPTB je public_4ba7a6
  JMPTB cmp eax, 0x1C
  JMPTB mov ecx, 8
  JMPTB je public_4ba7a6
  JMPTB cmp eax, 0x1D
  JMPTB mov ecx, 8
  JMPTB je public_4ba7a6
  JMPTB cmp eax, 0x1E
  JMPTB mov ecx, 8
  JMPTB je public_4ba7a6
  JMPTB cmp eax, 0x1F
  JMPTB mov ecx, 8
  JMPTB je public_4ba7a6
  JMPTB cmp eax, 0x20
  JMPTB mov ecx, 8
  JMPTB je public_4ba7a6
  JMPTB cmp eax, 0x21
  JMPTB mov ecx, 1
  JMPTB je public_4ba618
  JMPTB cmp eax, 0x22
  JMPTB mov ecx, 8
  JMPTB je public_4ba7a6
  JMPTB cmp eax, 0x23
  JMPTB mov ecx, 8
  JMPTB je public_4ba7a6
  JMPTB cmp eax, 0x24
  JMPTB mov ecx, 8
  JMPTB je public_4ba7a6
  JMPTB cmp eax, 0x25
  JMPTB mov ecx, 2
  JMPTB je public_4ba75d
  JMPTB cmp eax, 0x26
  JMPTB mov ecx, 3
  JMPTB je public_4ba640
  JMPTB cmp eax, 0x27
  JMPTB mov ecx, 8
  JMPTB je public_4ba7a6
  JMPTB cmp eax, 0x28
  JMPTB mov ecx, 8
  JMPTB je public_4ba7a6
  JMPTB cmp eax, 0x29
  JMPTB mov ecx, 8
  JMPTB je public_4ba7a6
  JMPTB cmp eax, 0x2A
  JMPTB mov ecx, 8
  JMPTB je public_4ba7a6
  JMPTB cmp eax, 0x2B
  JMPTB mov ecx, 8
  JMPTB je public_4ba7a6
  JMPTB cmp eax, 0x2C
  JMPTB mov ecx, 8
  JMPTB je public_4ba7a6
  JMPTB cmp eax, 0x2D
  JMPTB mov ecx, 4
  JMPTB je public_4ba667
  JMPTB cmp eax, 0x2E
  JMPTB mov ecx, 8
  JMPTB je public_4ba7a6
  JMPTB cmp eax, 0x2F
  JMPTB mov ecx, 8
  JMPTB je public_4ba7a6
  JMPTB cmp eax, 0x30
  JMPTB mov ecx, 8
  JMPTB je public_4ba7a6
  JMPTB cmp eax, 0x31
  JMPTB mov ecx, 5
  JMPTB je public_4ba689
  JMPTB cmp eax, 0x32
  JMPTB mov ecx, 6
  JMPTB je public_4ba5f0
  JMPTB cmp eax, 0x33
  JMPTB mov ecx, 8
  JMPTB je public_4ba7a6
  JMPTB cmp eax, 0x34
  JMPTB mov ecx, 8
  JMPTB je public_4ba7a6
  JMPTB cmp eax, 0x35
  JMPTB mov ecx, 8
  JMPTB je public_4ba7a6
  JMPTB cmp eax, 0x36
  JMPTB mov ecx, 8
  JMPTB je public_4ba7a6
  JMPTB cmp eax, 0x37
  JMPTB mov ecx, 8
  JMPTB je public_4ba7a6
  JMPTB cmp eax, 0x38
  JMPTB mov ecx, 8
  JMPTB je public_4ba7a6
  JMPTB cmp eax, 0x39
  JMPTB mov ecx, 7
  JMPTB je public_4ba77a
  JMPTB int 3
        public_4ba5f0 : nop
        mov edx, dword ptr ds : [esi+4]
        push edx
        call dword ptr ds : [public_5c6094]
        add esp, 4
        cmp eax, ebx
        jne public_4ba609
        mov dword ptr ds : [esi+4], ebx
        jmp public_4ba7a6
        public_4ba609 : nop
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0xC]
        mov dword ptr ds : [esi+4], eax
        jmp public_4ba7a6
        public_4ba618 : nop
        mov eax, dword ptr ds : [esi+4]
        push eax
        call dword ptr ds : [public_5c6090]
        add esp, 4
        cmp eax, ebx
        jne public_4ba631
        mov dword ptr ds : [esi+4], ebx
        jmp public_4ba7a6
        public_4ba631 : nop
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+4], eax
        jmp public_4ba7a6
        public_4ba640 : nop
        mov eax, dword ptr ds : [esi+4]
        push eax
        call dword ptr ds : [public_5c6088]
        add esp, 4
        cmp eax, ebx
        jne public_4ba659
        mov dword ptr ds : [esi+4], ebx
        jmp public_4ba7a6
        public_4ba659 : nop
        mov ecx, dword ptr ds : [eax+0x88]
        mov dword ptr ds : [esi+4], ecx
        jmp public_4ba7a6
        public_4ba667 : nop
        mov eax, dword ptr ds : [esi+4]
        cmp eax, ebx
        je public_4ba7a6
        mov edi, dword ptr ds : [eax+4]
        push eax
        call public_5b7e1d
        mov dword ptr ds : [esi+4], edi
        mov word ptr ds : [esi+8], 0x4D
        jmp public_4ba7a3
        public_4ba689 : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x54], edx
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ss : [esp+0x18], ebx
        mov byte ptr ss : [esp+0x1C], bl
        mov byte ptr ss : [esp+0x1D], bl
        mov byte ptr ss : [esp+0x1E], bl
        mov byte ptr ss : [esp+0x1F], bl
        mov byte ptr ss : [esp+0x20], bl
        mov byte ptr ss : [esp+0x21], bl
        mov byte ptr ss : [esp+0x22], bl
        mov byte ptr ss : [esp+0x23], bl
        mov byte ptr ss : [esp+0x24], bl
        mov byte ptr ss : [esp+0x25], bl
        mov byte ptr ss : [esp+0x26], bl
        mov byte ptr ss : [esp+0x27], bl
        mov byte ptr ss : [esp+0x28], bl
        mov byte ptr ss : [esp+0x29], bl
        mov dword ptr ss : [esp+0x4C], ebx
        mov dword ptr ss : [esp+0x2C], ebx
        mov dword ptr ss : [esp+0x30], ebx
        mov byte ptr ss : [esp+0x34], bl
        mov byte ptr ss : [esp+0x35], bl
        mov byte ptr ss : [esp+0x36], bl
        mov byte ptr ss : [esp+0x37], bl
        mov byte ptr ss : [esp+0x38], bl
        mov byte ptr ss : [esp+0x39], bl
        mov byte ptr ss : [esp+0x3A], bl
        mov byte ptr ss : [esp+0x3B], bl
        mov byte ptr ss : [esp+0x3C], bl
        mov byte ptr ss : [esp+0x3D], bl
        mov byte ptr ss : [esp+0x3E], bl
        mov byte ptr ss : [esp+0x3F], bl
        mov byte ptr ss : [esp+0x40], bl
        mov byte ptr ss : [esp+0x41], bl
        lea eax, ss:[esp+0x10]
        push eax
        lea ecx, ss:[esp+0x30]
        push ecx
        lea edx, ss:[esp+0x1C]
        push edx
        lea eax, ss:[esp+0x60]
        push eax
        mov byte ptr ss : [esp+0x5C], 1
        call dword ptr ds : [public_5c60a0]
        mov ecx, dword ptr ss : [esp+0x28]
        add esp, 0x10
        neg eax
        sbb eax, eax
        and eax, ecx
        lea ecx, ss:[esp+0x2C]
        mov dword ptr ds : [esi+4], eax
        mov byte ptr ss : [esp+0x4C], bl
        call ebp
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x4C], 0xFFFFFFFF
        call ebp
        jmp public_4ba7a6
        public_4ba75d : nop
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call dword ptr ds : [public_5c608c]
        xor edx, edx
        add esp, 4
        cmp eax, 0xFFFFFFFF
        sete dl
        dec edx
        and edx, eax
        mov dword ptr ds : [esi+4], edx
        jmp public_4ba7a6
        public_4ba77a : nop
        mov eax, dword ptr ds : [esi+4]
        push eax
        call dword ptr ds : [public_5c6084]
        add esp, 4
        cmp eax, ebx
        je public_4ba7a6
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x84]
        mov dword ptr ds : [esi+4], eax
        jmp public_4ba7a6
        public_4ba79a : nop
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_4ba5a0
        public_4ba7a3 : nop
        add esp, 4
        public_4ba7a6 : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, ebx
        jne public_4ba5d2
        pop edi
        pop ebp
        public_4ba7b2 : nop
        mov ecx, dword ptr ss : [esp+0x3C]
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x40
        ret 
        UNREACHABLE_TRAP(0x4ba5a0)
        ASM_EXPORT_ENTRY_SINGLE(0x4ba7a6, public_4ba7a6)
    }
}

#undef public_4ba5d2
#undef public_4ba5f0
#undef public_4ba609
#undef public_4ba618
#undef public_4ba631
#undef public_4ba640
#undef public_4ba659
#undef public_4ba667
#undef public_4ba689
#undef public_4ba75d
#undef public_4ba77a
#undef public_4ba79a
#undef public_4ba7a3
#undef public_4ba7a6
#undef public_4ba7b2

#pragma init_seg(compiler)
extern "C" void const* const public_4ba7a6 = __AsmFindLabelExport(&internal_4ba5a0, 0x4ba7a6);
