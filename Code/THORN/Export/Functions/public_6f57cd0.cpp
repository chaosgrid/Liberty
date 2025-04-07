#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4f5e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f55450);
CLANG_FORWARD_PROC_SYMBOL(public_6f56c30);
CLANG_FORWARD_PROC_SYMBOL(public_6f57cd0);

#define public_6f57cfb _public_6f57cfb
#define public_6f57d12 _public_6f57d12
#define public_6f57d27 _public_6f57d27
#define public_6f57d38 _public_6f57d38
#define public_6f57d41 _public_6f57d41
#define public_6f57d51 _public_6f57d51

PROC_DECLARE(0x6f57cd0, internal_6f57cd0, public_6f57cd0);
extern "C" NAKED register_t __cdecl internal_6f57cd0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [esp+4]
        push esi
        lea eax, ss:[esp+8]
        push eax
        push ecx
        call public_6f4f5e0
        push 0x22
        mov esi, eax
        call public_6f55450
        mov eax, dword ptr ss : [esp+0x14]
        add esp, 0xC
        mov edx, eax
        dec eax
        test edx, edx
        mov dword ptr ss : [esp+8], eax
        je public_6f57d51
        public_6f57cfb : nop
        movsx eax, byte ptr ds : [esi]
        cmp eax, 0x5C
        ja public_6f57d38
/*FIXUP xor ecx, ecx @0x6f57d03*/
/*FIXUP mov cl, byte ptr ds : [eax+public_6f57d6c] @0x6f57d05*/
/*FIXUP jmp dword ptr ds : [ecx*4+public_6f57d60] @0x6f57d0b*/
  JMPTB cmp eax, 0
  JMPTB mov ecx, 0
  JMPTB je public_6f57d27
  JMPTB cmp eax, 1
  JMPTB mov ecx, 2
  JMPTB je public_6f57d38
  JMPTB cmp eax, 2
  JMPTB mov ecx, 2
  JMPTB je public_6f57d38
  JMPTB cmp eax, 3
  JMPTB mov ecx, 2
  JMPTB je public_6f57d38
  JMPTB cmp eax, 4
  JMPTB mov ecx, 2
  JMPTB je public_6f57d38
  JMPTB cmp eax, 5
  JMPTB mov ecx, 2
  JMPTB je public_6f57d38
  JMPTB cmp eax, 6
  JMPTB mov ecx, 2
  JMPTB je public_6f57d38
  JMPTB cmp eax, 7
  JMPTB mov ecx, 2
  JMPTB je public_6f57d38
  JMPTB cmp eax, 8
  JMPTB mov ecx, 2
  JMPTB je public_6f57d38
  JMPTB cmp eax, 9
  JMPTB mov ecx, 2
  JMPTB je public_6f57d38
  JMPTB cmp eax, 0xA
  JMPTB mov ecx, 1
  JMPTB je public_6f57d12
  JMPTB cmp eax, 0xB
  JMPTB mov ecx, 2
  JMPTB je public_6f57d38
  JMPTB cmp eax, 0xC
  JMPTB mov ecx, 2
  JMPTB je public_6f57d38
  JMPTB cmp eax, 0xD
  JMPTB mov ecx, 2
  JMPTB je public_6f57d38
  JMPTB cmp eax, 0xE
  JMPTB mov ecx, 2
  JMPTB je public_6f57d38
  JMPTB cmp eax, 0xF
  JMPTB mov ecx, 2
  JMPTB je public_6f57d38
  JMPTB cmp eax, 0x10
  JMPTB mov ecx, 2
  JMPTB je public_6f57d38
  JMPTB cmp eax, 0x11
  JMPTB mov ecx, 2
  JMPTB je public_6f57d38
  JMPTB cmp eax, 0x12
  JMPTB mov ecx, 2
  JMPTB je public_6f57d38
  JMPTB cmp eax, 0x13
  JMPTB mov ecx, 2
  JMPTB je public_6f57d38
  JMPTB cmp eax, 0x14
  JMPTB mov ecx, 2
  JMPTB je public_6f57d38
  JMPTB cmp eax, 0x15
  JMPTB mov ecx, 2
  JMPTB je public_6f57d38
  JMPTB cmp eax, 0x16
  JMPTB mov ecx, 2
  JMPTB je public_6f57d38
  JMPTB cmp eax, 0x17
  JMPTB mov ecx, 2
  JMPTB je public_6f57d38
  JMPTB cmp eax, 0x18
  JMPTB mov ecx, 2
  JMPTB je public_6f57d38
  JMPTB cmp eax, 0x19
  JMPTB mov ecx, 2
  JMPTB je public_6f57d38
  JMPTB cmp eax, 0x1A
  JMPTB mov ecx, 2
  JMPTB je public_6f57d38
  JMPTB cmp eax, 0x1B
  JMPTB mov ecx, 2
  JMPTB je public_6f57d38
  JMPTB cmp eax, 0x1C
  JMPTB mov ecx, 2
  JMPTB je public_6f57d38
  JMPTB cmp eax, 0x1D
  JMPTB mov ecx, 2
  JMPTB je public_6f57d38
  JMPTB cmp eax, 0x1E
  JMPTB mov ecx, 2
  JMPTB je public_6f57d38
  JMPTB cmp eax, 0x1F
  JMPTB mov ecx, 2
  JMPTB je public_6f57d38
  JMPTB cmp eax, 0x20
  JMPTB mov ecx, 2
  JMPTB je public_6f57d38
  JMPTB cmp eax, 0x21
  JMPTB mov ecx, 2
  JMPTB je public_6f57d38
  JMPTB cmp eax, 0x22
  JMPTB mov ecx, 1
  JMPTB je public_6f57d12
  JMPTB cmp eax, 0x23
  JMPTB mov ecx, 2
  JMPTB je public_6f57d38
  JMPTB cmp eax, 0x24
  JMPTB mov ecx, 2
  JMPTB je public_6f57d38
  JMPTB cmp eax, 0x25
  JMPTB mov ecx, 2
  JMPTB je public_6f57d38
  JMPTB cmp eax, 0x26
  JMPTB mov ecx, 2
  JMPTB je public_6f57d38
  JMPTB cmp eax, 0x27
  JMPTB mov ecx, 2
  JMPTB je public_6f57d38
  JMPTB cmp eax, 0x28
  JMPTB mov ecx, 2
  JMPTB je public_6f57d38
  JMPTB cmp eax, 0x29
  JMPTB mov ecx, 2
  JMPTB je public_6f57d38
  JMPTB cmp eax, 0x2A
  JMPTB mov ecx, 2
  JMPTB je public_6f57d38
  JMPTB cmp eax, 0x2B
  JMPTB mov ecx, 2
  JMPTB je public_6f57d38
  JMPTB cmp eax, 0x2C
  JMPTB mov ecx, 2
  JMPTB je public_6f57d38
  JMPTB cmp eax, 0x2D
  JMPTB mov ecx, 2
  JMPTB je public_6f57d38
  JMPTB cmp eax, 0x2E
  JMPTB mov ecx, 2
  JMPTB je public_6f57d38
  JMPTB cmp eax, 0x2F
  JMPTB mov ecx, 2
  JMPTB je public_6f57d38
  JMPTB cmp eax, 0x30
  JMPTB mov ecx, 2
  JMPTB je public_6f57d38
  JMPTB cmp eax, 0x31
  JMPTB mov ecx, 2
  JMPTB je public_6f57d38
  JMPTB cmp eax, 0x32
  JMPTB mov ecx, 2
  JMPTB je public_6f57d38
  JMPTB cmp eax, 0x33
  JMPTB mov ecx, 2
  JMPTB je public_6f57d38
  JMPTB cmp eax, 0x34
  JMPTB mov ecx, 2
  JMPTB je public_6f57d38
  JMPTB cmp eax, 0x35
  JMPTB mov ecx, 2
  JMPTB je public_6f57d38
  JMPTB cmp eax, 0x36
  JMPTB mov ecx, 2
  JMPTB je public_6f57d38
  JMPTB cmp eax, 0x37
  JMPTB mov ecx, 2
  JMPTB je public_6f57d38
  JMPTB cmp eax, 0x38
  JMPTB mov ecx, 2
  JMPTB je public_6f57d38
  JMPTB cmp eax, 0x39
  JMPTB mov ecx, 2
  JMPTB je public_6f57d38
  JMPTB cmp eax, 0x3A
  JMPTB mov ecx, 2
  JMPTB je public_6f57d38
  JMPTB cmp eax, 0x3B
  JMPTB mov ecx, 2
  JMPTB je public_6f57d38
  JMPTB cmp eax, 0x3C
  JMPTB mov ecx, 2
  JMPTB je public_6f57d38
  JMPTB cmp eax, 0x3D
  JMPTB mov ecx, 2
  JMPTB je public_6f57d38
  JMPTB cmp eax, 0x3E
  JMPTB mov ecx, 2
  JMPTB je public_6f57d38
  JMPTB cmp eax, 0x3F
  JMPTB mov ecx, 2
  JMPTB je public_6f57d38
  JMPTB cmp eax, 0x40
  JMPTB mov ecx, 2
  JMPTB je public_6f57d38
  JMPTB cmp eax, 0x41
  JMPTB mov ecx, 2
  JMPTB je public_6f57d38
  JMPTB cmp eax, 0x42
  JMPTB mov ecx, 2
  JMPTB je public_6f57d38
  JMPTB cmp eax, 0x43
  JMPTB mov ecx, 2
  JMPTB je public_6f57d38
  JMPTB cmp eax, 0x44
  JMPTB mov ecx, 2
  JMPTB je public_6f57d38
  JMPTB cmp eax, 0x45
  JMPTB mov ecx, 2
  JMPTB je public_6f57d38
  JMPTB cmp eax, 0x46
  JMPTB mov ecx, 2
  JMPTB je public_6f57d38
  JMPTB cmp eax, 0x47
  JMPTB mov ecx, 2
  JMPTB je public_6f57d38
  JMPTB cmp eax, 0x48
  JMPTB mov ecx, 2
  JMPTB je public_6f57d38
  JMPTB cmp eax, 0x49
  JMPTB mov ecx, 2
  JMPTB je public_6f57d38
  JMPTB cmp eax, 0x4A
  JMPTB mov ecx, 2
  JMPTB je public_6f57d38
  JMPTB cmp eax, 0x4B
  JMPTB mov ecx, 2
  JMPTB je public_6f57d38
  JMPTB cmp eax, 0x4C
  JMPTB mov ecx, 2
  JMPTB je public_6f57d38
  JMPTB cmp eax, 0x4D
  JMPTB mov ecx, 2
  JMPTB je public_6f57d38
  JMPTB cmp eax, 0x4E
  JMPTB mov ecx, 2
  JMPTB je public_6f57d38
  JMPTB cmp eax, 0x4F
  JMPTB mov ecx, 2
  JMPTB je public_6f57d38
  JMPTB cmp eax, 0x50
  JMPTB mov ecx, 2
  JMPTB je public_6f57d38
  JMPTB cmp eax, 0x51
  JMPTB mov ecx, 2
  JMPTB je public_6f57d38
  JMPTB cmp eax, 0x52
  JMPTB mov ecx, 2
  JMPTB je public_6f57d38
  JMPTB cmp eax, 0x53
  JMPTB mov ecx, 2
  JMPTB je public_6f57d38
  JMPTB cmp eax, 0x54
  JMPTB mov ecx, 2
  JMPTB je public_6f57d38
  JMPTB cmp eax, 0x55
  JMPTB mov ecx, 2
  JMPTB je public_6f57d38
  JMPTB cmp eax, 0x56
  JMPTB mov ecx, 2
  JMPTB je public_6f57d38
  JMPTB cmp eax, 0x57
  JMPTB mov ecx, 2
  JMPTB je public_6f57d38
  JMPTB cmp eax, 0x58
  JMPTB mov ecx, 2
  JMPTB je public_6f57d38
  JMPTB cmp eax, 0x59
  JMPTB mov ecx, 2
  JMPTB je public_6f57d38
  JMPTB cmp eax, 0x5A
  JMPTB mov ecx, 2
  JMPTB je public_6f57d38
  JMPTB cmp eax, 0x5B
  JMPTB mov ecx, 2
  JMPTB je public_6f57d38
  JMPTB cmp eax, 0x5C
  JMPTB mov ecx, 1
  JMPTB je public_6f57d12
  JMPTB int 3
        public_6f57d12 : nop
        push 0x5C
        call public_6f55450
        movsx edx, byte ptr ds : [esi]
        push edx
        call public_6f55450
        add esp, 8
        jmp public_6f57d41
        public_6f57d27 : nop
        push 4
/*FIXUP push offset public_6f61dac @0x6f57d29*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f61dac
        call public_6f56c30
        add esp, 8
        jmp public_6f57d41
        public_6f57d38 : nop
        push eax
        call public_6f55450
        add esp, 4
        public_6f57d41 : nop
        mov eax, dword ptr ss : [esp+8]
        inc esi
        mov ecx, eax
        dec eax
        test ecx, ecx
        mov dword ptr ss : [esp+8], eax
        jne public_6f57cfb
        public_6f57d51 : nop
        push 0x22
        call public_6f55450
        add esp, 4
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f57cd0)
        ASM_EXPORT_ENTRY_FIRST(0x6f57d12, public_6f57d12)
        ASM_EXPORT_ENTRY(0x6f57d27, public_6f57d27)
        ASM_EXPORT_ENTRY_LAST(0x6f57d38, public_6f57d38)
    }
}

#undef public_6f57cfb
#undef public_6f57d12
#undef public_6f57d27
#undef public_6f57d38
#undef public_6f57d41
#undef public_6f57d51

#pragma init_seg(compiler)
extern "C" void const* const public_6f57d12 = __AsmFindLabelExport(&internal_6f57cd0, 0x6f57d12);
extern "C" void const* const public_6f57d27 = __AsmFindLabelExport(&internal_6f57cd0, 0x6f57d27);
extern "C" void const* const public_6f57d38 = __AsmFindLabelExport(&internal_6f57cd0, 0x6f57d38);
