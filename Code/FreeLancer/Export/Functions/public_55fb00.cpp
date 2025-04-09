#include "FreeLancer-PCH.h"


#define public_55fb1f _public_55fb1f
#define public_55fb38 _public_55fb38
#define public_55fb47 _public_55fb47
#define public_55fb56 _public_55fb56
#define public_55fb65 _public_55fb65
#define public_55fb77 _public_55fb77
#define public_55fbab _public_55fbab
#define public_55fbdf _public_55fbdf
#define public_55fbfc _public_55fbfc
#define public_55fc14 _public_55fc14
#define public_55fc21 _public_55fc21
#define public_55fc30 _public_55fc30

PROC_DECLARE(0x55fb00, internal_55fb00, public_55fb00);
extern "C" NAKED register_t __cdecl internal_55fb00()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [esp+4]
        sub esp, 8
        dec eax
        cmp eax, 0x40
        ja public_55fc30
/*FIXUP movzx edx, byte ptr ds : [eax+public_55fc60] @0x55fb11*/
/*FIXUP jmp dword ptr ds : [edx*4+public_55fc38] @0x55fb18*/
  JMPTB cmp eax, 0
  JMPTB mov edx, 0
  JMPTB je public_55fbfc
  JMPTB cmp eax, 1
  JMPTB mov edx, 1
  JMPTB je public_55fc21
  JMPTB cmp eax, 2
  JMPTB mov edx, 2
  JMPTB je public_55fbdf
  JMPTB cmp eax, 3
  JMPTB mov edx, 9
  JMPTB je public_55fc30
  JMPTB cmp eax, 4
  JMPTB mov edx, 9
  JMPTB je public_55fc30
  JMPTB cmp eax, 5
  JMPTB mov edx, 9
  JMPTB je public_55fc30
  JMPTB cmp eax, 6
  JMPTB mov edx, 9
  JMPTB je public_55fc30
  JMPTB cmp eax, 7
  JMPTB mov edx, 9
  JMPTB je public_55fc30
  JMPTB cmp eax, 8
  JMPTB mov edx, 9
  JMPTB je public_55fc30
  JMPTB cmp eax, 9
  JMPTB mov edx, 9
  JMPTB je public_55fc30
  JMPTB cmp eax, 0xA
  JMPTB mov edx, 9
  JMPTB je public_55fc30
  JMPTB cmp eax, 0xB
  JMPTB mov edx, 9
  JMPTB je public_55fc30
  JMPTB cmp eax, 0xC
  JMPTB mov edx, 9
  JMPTB je public_55fc30
  JMPTB cmp eax, 0xD
  JMPTB mov edx, 9
  JMPTB je public_55fc30
  JMPTB cmp eax, 0xE
  JMPTB mov edx, 9
  JMPTB je public_55fc30
  JMPTB cmp eax, 0xF
  JMPTB mov edx, 9
  JMPTB je public_55fc30
  JMPTB cmp eax, 0x10
  JMPTB mov edx, 9
  JMPTB je public_55fc30
  JMPTB cmp eax, 0x11
  JMPTB mov edx, 9
  JMPTB je public_55fc30
  JMPTB cmp eax, 0x12
  JMPTB mov edx, 9
  JMPTB je public_55fc30
  JMPTB cmp eax, 0x13
  JMPTB mov edx, 9
  JMPTB je public_55fc30
  JMPTB cmp eax, 0x14
  JMPTB mov edx, 9
  JMPTB je public_55fc30
  JMPTB cmp eax, 0x15
  JMPTB mov edx, 9
  JMPTB je public_55fc30
  JMPTB cmp eax, 0x16
  JMPTB mov edx, 9
  JMPTB je public_55fc30
  JMPTB cmp eax, 0x17
  JMPTB mov edx, 9
  JMPTB je public_55fc30
  JMPTB cmp eax, 0x18
  JMPTB mov edx, 3
  JMPTB je public_55fb1f
  JMPTB cmp eax, 0x19
  JMPTB mov edx, 9
  JMPTB je public_55fc30
  JMPTB cmp eax, 0x1A
  JMPTB mov edx, 9
  JMPTB je public_55fc30
  JMPTB cmp eax, 0x1B
  JMPTB mov edx, 9
  JMPTB je public_55fc30
  JMPTB cmp eax, 0x1C
  JMPTB mov edx, 9
  JMPTB je public_55fc30
  JMPTB cmp eax, 0x1D
  JMPTB mov edx, 9
  JMPTB je public_55fc30
  JMPTB cmp eax, 0x1E
  JMPTB mov edx, 9
  JMPTB je public_55fc30
  JMPTB cmp eax, 0x1F
  JMPTB mov edx, 9
  JMPTB je public_55fc30
  JMPTB cmp eax, 0x20
  JMPTB mov edx, 9
  JMPTB je public_55fc30
  JMPTB cmp eax, 0x21
  JMPTB mov edx, 9
  JMPTB je public_55fc30
  JMPTB cmp eax, 0x22
  JMPTB mov edx, 9
  JMPTB je public_55fc30
  JMPTB cmp eax, 0x23
  JMPTB mov edx, 9
  JMPTB je public_55fc30
  JMPTB cmp eax, 0x24
  JMPTB mov edx, 9
  JMPTB je public_55fc30
  JMPTB cmp eax, 0x25
  JMPTB mov edx, 9
  JMPTB je public_55fc30
  JMPTB cmp eax, 0x26
  JMPTB mov edx, 9
  JMPTB je public_55fc30
  JMPTB cmp eax, 0x27
  JMPTB mov edx, 9
  JMPTB je public_55fc30
  JMPTB cmp eax, 0x28
  JMPTB mov edx, 9
  JMPTB je public_55fc30
  JMPTB cmp eax, 0x29
  JMPTB mov edx, 9
  JMPTB je public_55fc30
  JMPTB cmp eax, 0x2A
  JMPTB mov edx, 9
  JMPTB je public_55fc30
  JMPTB cmp eax, 0x2B
  JMPTB mov edx, 4
  JMPTB je public_55fb47
  JMPTB cmp eax, 0x2C
  JMPTB mov edx, 5
  JMPTB je public_55fb56
  JMPTB cmp eax, 0x2D
  JMPTB mov edx, 9
  JMPTB je public_55fc30
  JMPTB cmp eax, 0x2E
  JMPTB mov edx, 9
  JMPTB je public_55fc30
  JMPTB cmp eax, 0x2F
  JMPTB mov edx, 9
  JMPTB je public_55fc30
  JMPTB cmp eax, 0x30
  JMPTB mov edx, 9
  JMPTB je public_55fc30
  JMPTB cmp eax, 0x31
  JMPTB mov edx, 9
  JMPTB je public_55fc30
  JMPTB cmp eax, 0x32
  JMPTB mov edx, 9
  JMPTB je public_55fc30
  JMPTB cmp eax, 0x33
  JMPTB mov edx, 9
  JMPTB je public_55fc30
  JMPTB cmp eax, 0x34
  JMPTB mov edx, 9
  JMPTB je public_55fc30
  JMPTB cmp eax, 0x35
  JMPTB mov edx, 9
  JMPTB je public_55fc30
  JMPTB cmp eax, 0x36
  JMPTB mov edx, 9
  JMPTB je public_55fc30
  JMPTB cmp eax, 0x37
  JMPTB mov edx, 9
  JMPTB je public_55fc30
  JMPTB cmp eax, 0x38
  JMPTB mov edx, 9
  JMPTB je public_55fc30
  JMPTB cmp eax, 0x39
  JMPTB mov edx, 9
  JMPTB je public_55fc30
  JMPTB cmp eax, 0x3A
  JMPTB mov edx, 9
  JMPTB je public_55fc30
  JMPTB cmp eax, 0x3B
  JMPTB mov edx, 9
  JMPTB je public_55fc30
  JMPTB cmp eax, 0x3C
  JMPTB mov edx, 9
  JMPTB je public_55fc30
  JMPTB cmp eax, 0x3D
  JMPTB mov edx, 9
  JMPTB je public_55fc30
  JMPTB cmp eax, 0x3E
  JMPTB mov edx, 6
  JMPTB je public_55fb65
  JMPTB cmp eax, 0x3F
  JMPTB mov edx, 7
  JMPTB je public_55fb77
  JMPTB cmp eax, 0x40
  JMPTB mov edx, 8
  JMPTB je public_55fbab
  JMPTB int 3
        public_55fb1f : nop
        test dword ptr ss : [esp+0x10], 0xFFFF0000
        je public_55fb38
        mov byte ptr ds : [ecx+0x34C], 0
        xor eax, eax
        add esp, 8
        ret 0xC
        public_55fb38 : nop
        mov byte ptr ds : [ecx+0x34C], 1
        xor eax, eax
        add esp, 8
        ret 0xC
        public_55fb47 : nop
        mov byte ptr ds : [ecx+0x34B], 1
        xor eax, eax
        add esp, 8
        ret 0xC
        public_55fb56 : nop
        mov byte ptr ds : [ecx+0x34B], 0
        xor eax, eax
        add esp, 8
        ret 0xC
        public_55fb65 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+0x340], eax
        xor eax, eax
        add esp, 8
        ret 0xC
        public_55fb77 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp], edx
        mov edx, dword ptr ss : [esp+0x14]
        xor eax, eax
        mov dword ptr ss : [esp+4], eax
        fild qword ptr ss : [esp]
        mov dword ptr ss : [esp], edx
        mov dword ptr ss : [esp+4], eax
        fstp dword ptr ds : [ecx+0x330]
        fild qword ptr ss : [esp]
        fstp dword ptr ds : [ecx+0x334]
        add esp, 8
        ret 0xC
        public_55fbab : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp], eax
        xor eax, eax
        mov dword ptr ss : [esp+4], eax
        fild qword ptr ss : [esp]
        mov dword ptr ss : [esp], edx
        mov dword ptr ss : [esp+4], eax
        fstp dword ptr ds : [ecx+0x338]
        fild qword ptr ss : [esp]
        fstp dword ptr ds : [ecx+0x33C]
        add esp, 8
        ret 0xC
        public_55fbdf : nop
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        mov dword ptr ds : [ecx+0xCC], eax
        setne al
        mov byte ptr ds : [ecx+0x34A], al
        xor eax, eax
        add esp, 8
        ret 0xC
        public_55fbfc : nop
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        mov al, byte ptr ds : [ecx+0x6C]
        je public_55fc14
        and al, 0xFC
        mov byte ptr ds : [ecx+0x6C], al
        xor eax, eax
        add esp, 8
        ret 0xC
        public_55fc14 : nop
        or al, 3
        mov byte ptr ds : [ecx+0x6C], al
        xor eax, eax
        add esp, 8
        ret 0xC
        public_55fc21 : nop
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        sete dl
        mov byte ptr ds : [ecx+0x34D], dl
        public_55fc30 : nop
        xor eax, eax
        add esp, 8
        ret 0xC
        UNREACHABLE_TRAP(0x55fb00)
        ASM_EXPORT_ENTRY_SINGLE(0x55fc30, public_55fc30)
    }
}

#undef public_55fb1f
#undef public_55fb38
#undef public_55fb47
#undef public_55fb56
#undef public_55fb65
#undef public_55fb77
#undef public_55fbab
#undef public_55fbdf
#undef public_55fbfc
#undef public_55fc14
#undef public_55fc21
#undef public_55fc30

#pragma init_seg(compiler)
extern "C" void const* const public_55fc30 = __AsmFindLabelExport(&internal_55fb00, 0x55fc30);
