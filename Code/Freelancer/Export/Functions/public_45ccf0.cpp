#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4424f0);
CLANG_FORWARD_PROC_SYMBOL(public_45ccf0);
CLANG_FORWARD_PROC_SYMBOL(public_45cf60);
CLANG_FORWARD_PROC_SYMBOL(public_55dee0);
CLANG_FORWARD_PROC_SYMBOL(public_55e120);
CLANG_FORWARD_PROC_SYMBOL(public_55e280);
CLANG_FORWARD_PROC_SYMBOL(public_5645c0);
CLANG_FORWARD_PROC_SYMBOL(public_576360);

#define public_45cd0f _public_45cd0f
#define public_45cd6e _public_45cd6e
#define public_45cdb2 _public_45cdb2
#define public_45cde2 _public_45cde2
#define public_45cde9 _public_45cde9
#define public_45cdf0 _public_45cdf0
#define public_45cdf7 _public_45cdf7
#define public_45cdfe _public_45cdfe
#define public_45ce05 _public_45ce05
#define public_45ce0c _public_45ce0c
#define public_45ce0e _public_45ce0e
#define public_45ce32 _public_45ce32
#define public_45ce50 _public_45ce50
#define public_45ce88 _public_45ce88
#define public_45cea5 _public_45cea5
#define public_45cea7 _public_45cea7
#define public_45ceb7 _public_45ceb7
#define public_45cebe _public_45cebe

PROC_DECLARE(0x45ccf0, internal_45ccf0, public_45ccf0);
extern "C" NAKED register_t __cdecl internal_45ccf0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 0xC
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x524]
        test eax, eax
        push edi
        jne public_45cd0f
        mov al, byte ptr ds : [public_67dcc8]
        test al, al
        jne public_45cebe
        public_45cd0f : nop
        lea ebp, ds:[esi+0x330]
        mov ecx, ebp
        call public_55e280
        test al, al
        jne public_45cebe
        lea ecx, ds:[esi+0x350]
        call public_55e280
        test al, al
        jne public_45cebe
        mov eax, dword ptr ds : [public_6724b4]
        test eax, eax
        je public_45cd6e
        mov ecx, dword ptr ds : [public_67ecd0]
        mov edx, dword ptr ds : [public_673344]
        mov eax, dword ptr ds : [ecx]
        push 0
        push edx
        call dword ptr ds : [eax+0x140]
        mov ecx, dword ptr ds : [public_6724b4]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 0
        push 0xEF02
        call dword ptr ds : [eax+0xA8]
        public_45cd6e : nop
        mov edi, dword ptr ss : [esp+0x1C]
        cmp edi, dword ptr ds : [esi+0x3A8]
        je public_45cebe
        push 1
        call public_4424f0
        mov eax, dword ptr ds : [esi+0x3A8]
        add esp, 4
        test eax, eax
        je public_45cdb2
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [esi+0x528], ecx
        mov ecx, esi
        mov dword ptr ds : [esi+0x524], edi
        call public_45cf60
        pop edi
        pop esi
        pop ebp
        add esp, 0xC
        ret 8
        public_45cdb2 : nop
        push ebx
        push 0x1B
        call public_5645c0
        or byte ptr ds : [edi+0x6C], 3
        mov edx, dword ptr ds : [public_5cea10]
        add esp, 4
        push edx
        mov ecx, ebp
        call public_55e120
        mov ebx, dword ptr ss : [esp+0x24]
        lea eax, ds:[ebx-0x63]
        cmp eax, 7
        ja public_45ce0c
/*FIXUP jmp dword ptr ds : [eax*4+public_45cec8] @0x45cddb*/
  JMPTB cmp eax, 0
  JMPTB je public_45ce0c
  JMPTB cmp eax, 1
  JMPTB je public_45ce0c
  JMPTB cmp eax, 2
  JMPTB je public_45cdf0
  JMPTB cmp eax, 3
  JMPTB je public_45cde2
  JMPTB cmp eax, 4
  JMPTB je public_45cde9
  JMPTB cmp eax, 5
  JMPTB je public_45cdfe
  JMPTB cmp eax, 6
  JMPTB je public_45ce05
  JMPTB cmp eax, 7
  JMPTB je public_45cdf7
  JMPTB int 3
        public_45cde2 : nop
        mov eax, 1
        jmp public_45ce0e
        public_45cde9 : nop
        mov eax, 2
        jmp public_45ce0e
        public_45cdf0 : nop
        mov eax, 3
        jmp public_45ce0e
        public_45cdf7 : nop
        mov eax, 4
        jmp public_45ce0e
        public_45cdfe : nop
        mov eax, 5
        jmp public_45ce0e
        public_45ce05 : nop
        mov eax, 6
        jmp public_45ce0e
        public_45ce0c : nop
        xor eax, eax
        public_45ce0e : nop
        mov cl, byte ptr ds : [esi+0x52C]
        test cl, cl
        je public_45ce32
        mov dword ptr ss : [esp+0x10], 0
        mov dword ptr ss : [esp+0x14], 0xBD99999A
        mov dword ptr ss : [esp+0x18], 0xBFA00000
        jmp public_45ce50
        public_45ce32 : nop
        lea eax, ds:[eax+eax*2+0xFC]
        lea ecx, ds:[esi+eax*4]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x10], edx
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ss : [esp+0x14], eax
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x18], ecx
        public_45ce50 : nop
        lea edx, ss:[esp+0x10]
        push edx
        lea eax, ds:[edi+0x2D4]
        push eax
        push edi
        mov ecx, ebp
        call public_55dee0
        push 0
        lea ecx, ds:[esi+0x32C]
        mov dword ptr ds : [esi+0x3A8], edi
        mov dword ptr ds : [esi+0x3AC], ebx
        call public_576360
        lea edi, ds:[esi+0x3D4]
        mov ebx, 7
        public_45ce88 : nop
        mov ecx, dword ptr ds : [edi]
        test ecx, ecx
        je public_45ceb7
        mov eax, dword ptr ds : [edi-0x1C]
        cmp eax, dword ptr ds : [esi+0x3A8]
        je public_45cea5
        cmp eax, dword ptr ds : [esi+0x50C]
        je public_45cea5
        xor al, al
        jmp public_45cea7
        public_45cea5 : nop
        mov al, 1
        public_45cea7 : nop
        mov edx, dword ptr ds : [ecx]
        movzx eax, al
        push 0
        push eax
        push 0xC
        call dword ptr ds : [edx+0xA8]
        public_45ceb7 : nop
        add edi, 4
        dec ebx
        jne public_45ce88
        pop ebx
        public_45cebe : nop
        pop edi
        pop esi
        pop ebp
        add esp, 0xC
        ret 8
        UNREACHABLE_TRAP(0x45ccf0)
        ASM_EXPORT_ENTRY_SINGLE(0x45cdf7, public_45cdf7)
    }
}

#undef public_45cd0f
#undef public_45cd6e
#undef public_45cdb2
#undef public_45cde2
#undef public_45cde9
#undef public_45cdf0
#undef public_45cdf7
#undef public_45cdfe
#undef public_45ce05
#undef public_45ce0c
#undef public_45ce0e
#undef public_45ce32
#undef public_45ce50
#undef public_45ce88
#undef public_45cea5
#undef public_45cea7
#undef public_45ceb7
#undef public_45cebe

#pragma init_seg(compiler)
extern "C" void const* const public_45cdf7 = __AsmFindLabelExport(&internal_45ccf0, 0x45cdf7);
