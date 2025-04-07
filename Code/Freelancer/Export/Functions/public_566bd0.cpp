#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46ba60);
CLANG_FORWARD_PROC_SYMBOL(public_46ba90);
CLANG_FORWARD_PROC_SYMBOL(public_46c860);
CLANG_FORWARD_PROC_SYMBOL(public_471f30);
CLANG_FORWARD_PROC_SYMBOL(public_4740f0);
CLANG_FORWARD_PROC_SYMBOL(public_474260);
CLANG_FORWARD_PROC_SYMBOL(public_53e430);
CLANG_FORWARD_PROC_SYMBOL(public_5645c0);
CLANG_FORWARD_PROC_SYMBOL(public_57da40);
CLANG_FORWARD_PROC_SYMBOL(public_57eb40);
CLANG_FORWARD_PROC_SYMBOL(public_5abc80);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5c209b);

#define public_566c25 _public_566c25
#define public_566c4a _public_566c4a
#define public_566cc2 _public_566cc2
#define public_566cfb _public_566cfb
#define public_566d34 _public_566d34
#define public_566d81 _public_566d81
#define public_566dc1 _public_566dc1
#define public_566dc5 _public_566dc5
#define public_566e31 _public_566e31
#define public_566ee5 _public_566ee5
#define public_566efb _public_566efb
#define public_566f40 _public_566f40
#define public_566f5f _public_566f5f
#define public_566f7b _public_566f7b

PROC_DECLARE(0x566bd0, internal_566bd0, public_566bd0);
extern "C" NAKED register_t __cdecl internal_566bd0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5c209b @0x566bd8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c209b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr fs : [0], esp
        sub esp, 0x34
        cmp eax, 0x3004
        push ebx
        push esi
        push edi
        mov esi, ecx
        jne public_566f7b
        xor ebx, ebx
        push ebx
        call public_5645c0
        mov edi, dword ptr ss : [esp+0x58]
        lea eax, ds:[edi-3]
        add esp, 4
        cmp eax, 0xE
        ja public_566f7b
/*FIXUP movzx eax, byte ptr ds : [eax+public_566fa8] @0x566c17*/
/*FIXUP jmp dword ptr ds : [eax*4+public_566f94] @0x566c1e*/
  JMPTB cmp eax, 0
  JMPTB jne public_4c0000000000cbe1
  JMPTB mov eax, 0
  JMPTB public_4c0000000000cbe1 : nop
        je public_566efb
  JMPTB cmp eax, 1
  JMPTB jne public_4c0000000000cbdd
  JMPTB mov eax, 1
  JMPTB public_4c0000000000cbdd : nop
        je public_566c25
  JMPTB cmp eax, 2
  JMPTB jne public_4c0000000000cbd9
  JMPTB mov eax, 4
  JMPTB public_4c0000000000cbd9 : nop
        je public_566f7b
  JMPTB cmp eax, 3
  JMPTB jne public_4c0000000000cbd5
  JMPTB mov eax, 4
  JMPTB public_4c0000000000cbd5 : nop
        je public_566f7b
  JMPTB cmp eax, 4
  JMPTB jne public_4c0000000000cbd1
  JMPTB mov eax, 4
  JMPTB public_4c0000000000cbd1 : nop
        je public_566f7b
  JMPTB cmp eax, 5
  JMPTB jne public_4c0000000000cbcd
  JMPTB mov eax, 4
  JMPTB public_4c0000000000cbcd : nop
        je public_566f7b
  JMPTB cmp eax, 6
  JMPTB jne public_4c0000000000cbc9
  JMPTB mov eax, 4
  JMPTB public_4c0000000000cbc9 : nop
        je public_566f7b
  JMPTB cmp eax, 7
  JMPTB jne public_4c0000000000cbc5
  JMPTB mov eax, 0
  JMPTB public_4c0000000000cbc5 : nop
        je public_566efb
  JMPTB cmp eax, 8
  JMPTB jne public_4c0000000000cbc1
  JMPTB mov eax, 2
  JMPTB public_4c0000000000cbc1 : nop
        je public_566f40
  JMPTB cmp eax, 9
  JMPTB jne public_4c0000000000cbbd
  JMPTB mov eax, 4
  JMPTB public_4c0000000000cbbd : nop
        je public_566f7b
  JMPTB cmp eax, 0xA
  JMPTB jne public_4c0000000000cbb9
  JMPTB mov eax, 4
  JMPTB public_4c0000000000cbb9 : nop
        je public_566f7b
  JMPTB cmp eax, 0xB
  JMPTB jne public_4c0000000000cbb5
  JMPTB mov eax, 4
  JMPTB public_4c0000000000cbb5 : nop
        je public_566f7b
  JMPTB cmp eax, 0xC
  JMPTB jne public_4c0000000000cbb1
  JMPTB mov eax, 4
  JMPTB public_4c0000000000cbb1 : nop
        je public_566f7b
  JMPTB cmp eax, 0xD
  JMPTB jne public_4c0000000000cbad
  JMPTB mov eax, 0
  JMPTB public_4c0000000000cbad : nop
        je public_566efb
  JMPTB cmp eax, 0xE
  JMPTB jne public_4c0000000000cba9
  JMPTB mov eax, 3
  JMPTB public_4c0000000000cba9 : nop
        je public_566f5f
  JMPTB int 3
        public_566c25 : nop
        cmp byte ptr ds : [public_67c210], bl
        jne public_566c4a
        push ebx
        push ebx
        push ebx
        push 0xC9B7
        push 0x601EB
        call public_4740f0
        add esp, 0x14
        test al, al
        je public_566ee5
        public_566c4a : nop
        lea ecx, ss:[esp+0x54]
        push ecx
        lea ecx, ss:[esp+0x20]
        mov byte ptr ds : [public_67c210], 1
        call public_46ba60
        lea edx, ss:[esp+0xF]
        push edx
        lea ecx, ss:[esp+0x38]
        mov dword ptr ss : [esp+0x4C], ebx
        call public_46ba60
        lea eax, ss:[esp+0x50]
        push eax
        lea ecx, ss:[esp+0x2C]
        mov byte ptr ss : [esp+0x4C], 1
        call public_46ba60
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea ecx, ss:[esp+0x28]
        mov byte ptr ss : [esp+0x54], 2
        call public_46c860
        lea edx, ss:[esp+0x1C]
        push edx
        push 0x601ED
        call public_57da40
        add esp, 8
        test al, al
        je public_566cc2
        lea eax, ss:[esp+0x1C]
        push eax
        call public_57eb40
        add esp, 4
        public_566cc2 : nop
        mov eax, dword ptr ss : [esp+0x38]
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea ecx, ss:[esp+0x40]
        call public_46c860
        lea edx, ss:[esp+0x34]
        push edx
        push 0x601EC
        call public_57da40
        add esp, 8
        test al, al
        je public_566cfb
        lea eax, ss:[esp+0x34]
        push eax
        call public_57eb40
        add esp, 4
        public_566cfb : nop
        mov eax, dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea ecx, ss:[esp+0x34]
        call public_46c860
        lea edx, ss:[esp+0x28]
        push edx
        push 0x601F0
        call public_57da40
        add esp, 8
        test al, al
        je public_566d34
        lea eax, ss:[esp+0x28]
        push eax
        call public_57eb40
        add esp, 4
        public_566d34 : nop
        push ebx
        lea ecx, ss:[esp+0x14]
        push ecx
        lea edx, ss:[esp+0x3C]
        push edx
        lea eax, ss:[esp+0x28]
        push eax
        lea ecx, ss:[esp+0x38]
        push 0xC9B7
        push ecx
        mov dword ptr ss : [esp+0x28], 0xFFFFFFFF
        call public_474260
        add esp, 0x18
        test al, al
        je public_566e31
        mov eax, dword ptr ss : [esp+0x10]
        dec eax
        mov byte ptr ds : [public_615b18], 1
        mov byte ptr ds : [public_615b10], bl
        jne public_566d81
        mov byte ptr ds : [public_615b10], 1
        public_566d81 : nop
        mov ecx, offset public_67e7b8
        call public_5abc80
        cmp byte ptr ds : [esi+0x56C], bl
        jne public_566dc1
        mov dword ptr ds : [esi+0x570], ebx
        mov dword ptr ds : [esi+0x568], edi
        mov byte ptr ds : [esi+0x56C], 1
        mov dword ptr ds : [esi+0x560], 0x66666666
        mov dword ptr ds : [esi+0x564], 0x3FD66666
        mov byte ptr ss : [esp+0x50], 1
        jmp public_566dc5
        public_566dc1 : nop
        mov byte ptr ss : [esp+0x50], bl
        public_566dc5 : nop
        lea ecx, ss:[esp+0x28]
        mov byte ptr ss : [esp+0x48], 1
        call public_46ba90
        lea ecx, ss:[esp+0x34]
        mov byte ptr ss : [esp+0x48], bl
        call public_46ba90
        lea edx, ss:[esp+0x54]
        push edx
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x4C], 0xFFFFFFFF
        call public_53e430
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ds : [eax]
        push ecx
        push edx
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ss:[esp+0x28]
        call public_46c860
        mov ecx, dword ptr ss : [esp+0x20]
        push ecx
        call public_5b7e1d
        mov al, byte ptr ss : [esp+0x54]
        add esp, 4
        pop edi
        pop esi
        pop ebx
        mov ecx, dword ptr ss : [esp+0x34]
        mov dword ptr fs : [0], ecx
        add esp, 0x40
        ret 0xC
        public_566e31 : nop
        lea edx, ss:[esp+0x50]
        push edx
        lea ecx, ss:[esp+0x2C]
        mov byte ptr ss : [esp+0x4C], 1
        call public_53e430
        mov ecx, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ds : [eax]
        push ecx
        push edx
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ss:[esp+0x34]
        call public_46c860
        mov ecx, dword ptr ss : [esp+0x2C]
        push ecx
        call public_5b7e1d
        add esp, 4
        lea edx, ss:[esp+0x50]
        push edx
        lea ecx, ss:[esp+0x38]
        mov dword ptr ss : [esp+0x30], ebx
        mov dword ptr ss : [esp+0x34], ebx
        mov byte ptr ss : [esp+0x4C], bl
        call public_53e430
        mov ecx, dword ptr ss : [esp+0x38]
        mov edx, dword ptr ds : [eax]
        push ecx
        push edx
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ss:[esp+0x40]
        call public_46c860
        mov ecx, dword ptr ss : [esp+0x38]
        push ecx
        call public_5b7e1d
        add esp, 4
        lea edx, ss:[esp+0x50]
        push edx
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x3C], ebx
        mov dword ptr ss : [esp+0x40], ebx
        mov dword ptr ss : [esp+0x4C], 0xFFFFFFFF
        call public_53e430
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ds : [eax]
        push ecx
        push edx
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0x28]
        call public_46c860
        mov ecx, dword ptr ss : [esp+0x20]
        push ecx
        call public_5b7e1d
        add esp, 4
        public_566ee5 : nop
        pop edi
        pop esi
        mov al, 1
        pop ebx
        mov ecx, dword ptr ss : [esp+0x34]
        mov dword ptr fs : [0], ecx
        add esp, 0x40
        ret 0xC
        public_566efb : nop
        cmp byte ptr ds : [esi+0x56C], bl
        jne public_566f7b
        mov dword ptr ds : [esi+0x568], edi
        pop edi
        mov dword ptr ds : [esi+0x570], ebx
        mov byte ptr ds : [esi+0x56C], 1
        mov dword ptr ds : [esi+0x560], 0x66666666
        mov dword ptr ds : [esi+0x564], 0x3FD66666
        pop esi
        mov al, 1
        pop ebx
        mov ecx, dword ptr ss : [esp+0x34]
        mov dword ptr fs : [0], ecx
        add esp, 0x40
        ret 0xC
        public_566f40 : nop
        push ebx
        call public_471f30
        add esp, 4
        pop edi
        pop esi
        mov al, 1
        pop ebx
        mov ecx, dword ptr ss : [esp+0x34]
        mov dword ptr fs : [0], ecx
        add esp, 0x40
        ret 0xC
        public_566f5f : nop
        mov dword ptr ds : [esi+0x80], edi
        pop edi
        pop esi
        mov al, 1
        pop ebx
        mov ecx, dword ptr ss : [esp+0x34]
        mov dword ptr fs : [0], ecx
        add esp, 0x40
        ret 0xC
        public_566f7b : nop
        mov ecx, dword ptr ss : [esp+0x40]
        pop edi
        pop esi
        xor al, al
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x40
        ret 0xC
        UNREACHABLE_TRAP(0x566bd0)
        ASM_EXPORT_ENTRY_SINGLE(0x566f7b, public_566f7b)
    }
}

#undef public_566c25
#undef public_566c4a
#undef public_566cc2
#undef public_566cfb
#undef public_566d34
#undef public_566d81
#undef public_566dc1
#undef public_566dc5
#undef public_566e31
#undef public_566ee5
#undef public_566efb
#undef public_566f40
#undef public_566f5f
#undef public_566f7b

#pragma init_seg(compiler)
extern "C" void const* const public_566f7b = __AsmFindLabelExport(&internal_566bd0, 0x566f7b);
