#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_459210);
CLANG_FORWARD_PROC_SYMBOL(public_459950);

#define public_459990 _public_459990
#define public_4599ae _public_4599ae
#define public_4599c2 _public_4599c2
#define public_4599e0 _public_4599e0
#define public_4599fe _public_4599fe
#define public_459a19 _public_459a19
#define public_459a3e _public_459a3e
#define public_459a4a _public_459a4a
#define public_459a57 _public_459a57

PROC_DECLARE(0x459950, internal_459950, public_459950);
extern "C" NAKED register_t __cdecl internal_459950()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ds : [public_66d334]
        test ecx, ecx
        push esi
        je public_459a57
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_459210
        mov esi, dword ptr ds : [esi]
        test esi, esi
        je public_459a57
        push ebx
        mov ebx, dword ptr ds : [public_5c6094]
        push ebp
        mov ebp, dword ptr ds : [public_5c6090]
        push edi
        mov edi, dword ptr ds : [public_5c6084]
        nop 
        lea esp, ss:[esp]
        public_459990 : nop
        movzx eax, word ptr ds : [esi+8]
        add eax, 0xFFFFFFDF
        cmp eax, 0x52
        ja public_459a4a
/*FIXUP movzx ecx, byte ptr ds : [eax+public_459a78] @0x4599a0*/
/*FIXUP jmp dword ptr ds : [ecx*4+public_459a5c] @0x4599a7*/
  JMPTB cmp eax, 0
  JMPTB mov ecx, 0
  JMPTB je public_459a3e
  JMPTB cmp eax, 1
  JMPTB mov ecx, 6
  JMPTB je public_459a4a
  JMPTB cmp eax, 2
  JMPTB mov ecx, 6
  JMPTB je public_459a4a
  JMPTB cmp eax, 3
  JMPTB mov ecx, 6
  JMPTB je public_459a4a
  JMPTB cmp eax, 4
  JMPTB mov ecx, 6
  JMPTB je public_459a4a
  JMPTB cmp eax, 5
  JMPTB mov ecx, 6
  JMPTB je public_459a4a
  JMPTB cmp eax, 6
  JMPTB mov ecx, 6
  JMPTB je public_459a4a
  JMPTB cmp eax, 7
  JMPTB mov ecx, 6
  JMPTB je public_459a4a
  JMPTB cmp eax, 8
  JMPTB mov ecx, 6
  JMPTB je public_459a4a
  JMPTB cmp eax, 9
  JMPTB mov ecx, 6
  JMPTB je public_459a4a
  JMPTB cmp eax, 0xA
  JMPTB mov ecx, 6
  JMPTB je public_459a4a
  JMPTB cmp eax, 0xB
  JMPTB mov ecx, 6
  JMPTB je public_459a4a
  JMPTB cmp eax, 0xC
  JMPTB mov ecx, 6
  JMPTB je public_459a4a
  JMPTB cmp eax, 0xD
  JMPTB mov ecx, 6
  JMPTB je public_459a4a
  JMPTB cmp eax, 0xE
  JMPTB mov ecx, 6
  JMPTB je public_459a4a
  JMPTB cmp eax, 0xF
  JMPTB mov ecx, 6
  JMPTB je public_459a4a
  JMPTB cmp eax, 0x10
  JMPTB mov ecx, 6
  JMPTB je public_459a4a
  JMPTB cmp eax, 0x11
  JMPTB mov ecx, 6
  JMPTB je public_459a4a
  JMPTB cmp eax, 0x12
  JMPTB mov ecx, 6
  JMPTB je public_459a4a
  JMPTB cmp eax, 0x13
  JMPTB mov ecx, 6
  JMPTB je public_459a4a
  JMPTB cmp eax, 0x14
  JMPTB mov ecx, 6
  JMPTB je public_459a4a
  JMPTB cmp eax, 0x15
  JMPTB mov ecx, 6
  JMPTB je public_459a4a
  JMPTB cmp eax, 0x16
  JMPTB mov ecx, 6
  JMPTB je public_459a4a
  JMPTB cmp eax, 0x17
  JMPTB mov ecx, 6
  JMPTB je public_459a4a
  JMPTB cmp eax, 0x18
  JMPTB mov ecx, 6
  JMPTB je public_459a4a
  JMPTB cmp eax, 0x19
  JMPTB mov ecx, 6
  JMPTB je public_459a4a
  JMPTB cmp eax, 0x1A
  JMPTB mov ecx, 6
  JMPTB je public_459a4a
  JMPTB cmp eax, 0x1B
  JMPTB mov ecx, 6
  JMPTB je public_459a4a
  JMPTB cmp eax, 0x1C
  JMPTB mov ecx, 6
  JMPTB je public_459a4a
  JMPTB cmp eax, 0x1D
  JMPTB mov ecx, 6
  JMPTB je public_459a4a
  JMPTB cmp eax, 0x1E
  JMPTB mov ecx, 6
  JMPTB je public_459a4a
  JMPTB cmp eax, 0x1F
  JMPTB mov ecx, 6
  JMPTB je public_459a4a
  JMPTB cmp eax, 0x20
  JMPTB mov ecx, 6
  JMPTB je public_459a4a
  JMPTB cmp eax, 0x21
  JMPTB mov ecx, 1
  JMPTB je public_4599e0
  JMPTB cmp eax, 0x22
  JMPTB mov ecx, 6
  JMPTB je public_459a4a
  JMPTB cmp eax, 0x23
  JMPTB mov ecx, 6
  JMPTB je public_459a4a
  JMPTB cmp eax, 0x24
  JMPTB mov ecx, 6
  JMPTB je public_459a4a
  JMPTB cmp eax, 0x25
  JMPTB mov ecx, 2
  JMPTB je public_4599fe
  JMPTB cmp eax, 0x26
  JMPTB mov ecx, 6
  JMPTB je public_459a4a
  JMPTB cmp eax, 0x27
  JMPTB mov ecx, 6
  JMPTB je public_459a4a
  JMPTB cmp eax, 0x28
  JMPTB mov ecx, 6
  JMPTB je public_459a4a
  JMPTB cmp eax, 0x29
  JMPTB mov ecx, 6
  JMPTB je public_459a4a
  JMPTB cmp eax, 0x2A
  JMPTB mov ecx, 6
  JMPTB je public_459a4a
  JMPTB cmp eax, 0x2B
  JMPTB mov ecx, 6
  JMPTB je public_459a4a
  JMPTB cmp eax, 0x2C
  JMPTB mov ecx, 6
  JMPTB je public_459a4a
  JMPTB cmp eax, 0x2D
  JMPTB mov ecx, 6
  JMPTB je public_459a4a
  JMPTB cmp eax, 0x2E
  JMPTB mov ecx, 6
  JMPTB je public_459a4a
  JMPTB cmp eax, 0x2F
  JMPTB mov ecx, 6
  JMPTB je public_459a4a
  JMPTB cmp eax, 0x30
  JMPTB mov ecx, 6
  JMPTB je public_459a4a
  JMPTB cmp eax, 0x31
  JMPTB mov ecx, 6
  JMPTB je public_459a4a
  JMPTB cmp eax, 0x32
  JMPTB mov ecx, 3
  JMPTB je public_4599c2
  JMPTB cmp eax, 0x33
  JMPTB mov ecx, 6
  JMPTB je public_459a4a
  JMPTB cmp eax, 0x34
  JMPTB mov ecx, 6
  JMPTB je public_459a4a
  JMPTB cmp eax, 0x35
  JMPTB mov ecx, 6
  JMPTB je public_459a4a
  JMPTB cmp eax, 0x36
  JMPTB mov ecx, 6
  JMPTB je public_459a4a
  JMPTB cmp eax, 0x37
  JMPTB mov ecx, 6
  JMPTB je public_459a4a
  JMPTB cmp eax, 0x38
  JMPTB mov ecx, 6
  JMPTB je public_459a4a
  JMPTB cmp eax, 0x39
  JMPTB mov ecx, 4
  JMPTB je public_459a19
  JMPTB cmp eax, 0x3A
  JMPTB mov ecx, 6
  JMPTB je public_459a4a
  JMPTB cmp eax, 0x3B
  JMPTB mov ecx, 6
  JMPTB je public_459a4a
  JMPTB cmp eax, 0x3C
  JMPTB mov ecx, 6
  JMPTB je public_459a4a
  JMPTB cmp eax, 0x3D
  JMPTB mov ecx, 6
  JMPTB je public_459a4a
  JMPTB cmp eax, 0x3E
  JMPTB mov ecx, 6
  JMPTB je public_459a4a
  JMPTB cmp eax, 0x3F
  JMPTB mov ecx, 6
  JMPTB je public_459a4a
  JMPTB cmp eax, 0x40
  JMPTB mov ecx, 6
  JMPTB je public_459a4a
  JMPTB cmp eax, 0x41
  JMPTB mov ecx, 6
  JMPTB je public_459a4a
  JMPTB cmp eax, 0x42
  JMPTB mov ecx, 6
  JMPTB je public_459a4a
  JMPTB cmp eax, 0x43
  JMPTB mov ecx, 6
  JMPTB je public_459a4a
  JMPTB cmp eax, 0x44
  JMPTB mov ecx, 6
  JMPTB je public_459a4a
  JMPTB cmp eax, 0x45
  JMPTB mov ecx, 6
  JMPTB je public_459a4a
  JMPTB cmp eax, 0x46
  JMPTB mov ecx, 6
  JMPTB je public_459a4a
  JMPTB cmp eax, 0x47
  JMPTB mov ecx, 6
  JMPTB je public_459a4a
  JMPTB cmp eax, 0x48
  JMPTB mov ecx, 6
  JMPTB je public_459a4a
  JMPTB cmp eax, 0x49
  JMPTB mov ecx, 6
  JMPTB je public_459a4a
  JMPTB cmp eax, 0x4A
  JMPTB mov ecx, 6
  JMPTB je public_459a4a
  JMPTB cmp eax, 0x4B
  JMPTB mov ecx, 6
  JMPTB je public_459a4a
  JMPTB cmp eax, 0x4C
  JMPTB mov ecx, 6
  JMPTB je public_459a4a
  JMPTB cmp eax, 0x4D
  JMPTB mov ecx, 6
  JMPTB je public_459a4a
  JMPTB cmp eax, 0x4E
  JMPTB mov ecx, 6
  JMPTB je public_459a4a
  JMPTB cmp eax, 0x4F
  JMPTB mov ecx, 6
  JMPTB je public_459a4a
  JMPTB cmp eax, 0x50
  JMPTB mov ecx, 6
  JMPTB je public_459a4a
  JMPTB cmp eax, 0x51
  JMPTB mov ecx, 6
  JMPTB je public_459a4a
  JMPTB cmp eax, 0x52
  JMPTB mov ecx, 5
  JMPTB je public_4599ae
  JMPTB int 3
        public_4599ae : nop
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [public_66d334]
        push edx
        call public_459210
        jmp public_459a4a
        public_4599c2 : nop
        mov eax, dword ptr ds : [esi+4]
        push eax
        call ebx
        mov edx, dword ptr ds : [eax]
        add esp, 4
        mov ecx, eax
        call dword ptr ds : [edx+0xC]
        mov ecx, dword ptr ds : [public_66d334]
        push eax
        call public_459210
        jmp public_459a4a
        public_4599e0 : nop
        mov eax, dword ptr ds : [esi+4]
        push eax
        call ebp
        mov edx, dword ptr ds : [eax]
        add esp, 4
        mov ecx, eax
        call dword ptr ds : [edx+8]
        mov ecx, dword ptr ds : [public_66d334]
        push eax
        call public_459210
        jmp public_459a4a
        public_4599fe : nop
        mov eax, dword ptr ds : [esi+4]
        push eax
        call dword ptr ds : [public_5c608c]
        mov ecx, dword ptr ds : [public_66d334]
        add esp, 4
        push eax
        call public_459210
        jmp public_459a4a
        public_459a19 : nop
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call edi
        add esp, 4
        test eax, eax
        je public_459a4a
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x84]
        mov ecx, dword ptr ds : [public_66d334]
        push eax
        call public_459210
        jmp public_459a4a
        public_459a3e : nop
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_459950
        add esp, 4
        public_459a4a : nop
        mov esi, dword ptr ds : [esi]
        test esi, esi
        jne public_459990
        pop edi
        pop ebp
        pop ebx
        public_459a57 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x459950)
        ASM_EXPORT_ENTRY_SINGLE(0x459a4a, public_459a4a)
    }
}

#undef public_459990
#undef public_4599ae
#undef public_4599c2
#undef public_4599e0
#undef public_4599fe
#undef public_459a19
#undef public_459a3e
#undef public_459a4a
#undef public_459a57

#pragma init_seg(compiler)
extern "C" void const* const public_459a4a = __AsmFindLabelExport(&internal_459950, 0x459a4a);
