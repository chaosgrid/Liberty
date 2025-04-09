#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_438060);
CLANG_FORWARD_PROC_SYMBOL(public_43a510);
CLANG_FORWARD_PROC_SYMBOL(public_47e460);

#define public_47e4c2 _public_47e4c2
#define public_47e4f1 _public_47e4f1
#define public_47e4f8 _public_47e4f8
#define public_47e502 _public_47e502
#define public_47e50c _public_47e50c
#define public_47e516 _public_47e516
#define public_47e520 _public_47e520

PROC_DECLARE(0x47e460, internal_47e460, public_47e460);
extern "C" NAKED register_t __cdecl internal_47e460()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        push edi
        call dword ptr ds : [public_5c603c]
        mov ebp, eax
        add esp, 4
        test ebp, ebp
        je public_47e520
        mov eax, dword ptr ss : [ebp+0x14]
        test eax, eax
        je public_47e520
        mov eax, dword ptr ds : [public_66873c]
        test eax, eax
        mov ebx, dword ptr ds : [public_5c632c]
        je public_47e4c2
        push eax
        mov ecx, offset public_668708
        call public_43a510
        mov esi, eax
        test esi, esi
        je public_47e4c2
        push edi
        call ebx
        add esp, 4
        push eax
        mov ecx, esi
        call public_438060
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x44
        jnp public_47e520
        public_47e4c2 : nop
        push edi
        call ebx
        push eax
        call dword ptr ds : [public_5c6088]
        add esp, 8
        test eax, eax
        je public_47e520
        mov eax, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [eax+0x18]
        add eax, 0xFFFFFFFE
        cmp eax, 0x40
        ja public_47e516
/*FIXUP movzx ecx, byte ptr ds : [eax+public_47e540] @0x47e4e3*/
/*FIXUP jmp dword ptr ds : [ecx*4+public_47e52c] @0x47e4ea*/
  JMPTB cmp eax, 0
  JMPTB mov ecx, 0
  JMPTB je public_47e50c
  JMPTB cmp eax, 1
  JMPTB mov ecx, 1
  JMPTB je public_47e4f8
  JMPTB cmp eax, 2
  JMPTB mov ecx, 2
  JMPTB je public_47e4f1
  JMPTB cmp eax, 3
  JMPTB mov ecx, 3
  JMPTB je public_47e502
  JMPTB cmp eax, 4
  JMPTB mov ecx, 3
  JMPTB je public_47e502
  JMPTB cmp eax, 5
  JMPTB mov ecx, 3
  JMPTB je public_47e502
  JMPTB cmp eax, 6
  JMPTB mov ecx, 3
  JMPTB je public_47e502
  JMPTB cmp eax, 7
  JMPTB mov ecx, 3
  JMPTB je public_47e502
  JMPTB cmp eax, 8
  JMPTB mov ecx, 2
  JMPTB je public_47e4f1
  JMPTB cmp eax, 9
  JMPTB mov ecx, 2
  JMPTB je public_47e4f1
  JMPTB cmp eax, 0xA
  JMPTB mov ecx, 2
  JMPTB je public_47e4f1
  JMPTB cmp eax, 0xB
  JMPTB mov ecx, 2
  JMPTB je public_47e4f1
  JMPTB cmp eax, 0xC
  JMPTB mov ecx, 4
  JMPTB je public_47e516
  JMPTB cmp eax, 0xD
  JMPTB mov ecx, 2
  JMPTB je public_47e4f1
  JMPTB cmp eax, 0xE
  JMPTB mov ecx, 2
  JMPTB je public_47e4f1
  JMPTB cmp eax, 0xF
  JMPTB mov ecx, 2
  JMPTB je public_47e4f1
  JMPTB cmp eax, 0x10
  JMPTB mov ecx, 2
  JMPTB je public_47e4f1
  JMPTB cmp eax, 0x11
  JMPTB mov ecx, 2
  JMPTB je public_47e4f1
  JMPTB cmp eax, 0x12
  JMPTB mov ecx, 2
  JMPTB je public_47e4f1
  JMPTB cmp eax, 0x13
  JMPTB mov ecx, 2
  JMPTB je public_47e4f1
  JMPTB cmp eax, 0x14
  JMPTB mov ecx, 2
  JMPTB je public_47e4f1
  JMPTB cmp eax, 0x15
  JMPTB mov ecx, 2
  JMPTB je public_47e4f1
  JMPTB cmp eax, 0x16
  JMPTB mov ecx, 2
  JMPTB je public_47e4f1
  JMPTB cmp eax, 0x17
  JMPTB mov ecx, 2
  JMPTB je public_47e4f1
  JMPTB cmp eax, 0x18
  JMPTB mov ecx, 2
  JMPTB je public_47e4f1
  JMPTB cmp eax, 0x19
  JMPTB mov ecx, 2
  JMPTB je public_47e4f1
  JMPTB cmp eax, 0x1A
  JMPTB mov ecx, 2
  JMPTB je public_47e4f1
  JMPTB cmp eax, 0x1B
  JMPTB mov ecx, 2
  JMPTB je public_47e4f1
  JMPTB cmp eax, 0x1C
  JMPTB mov ecx, 2
  JMPTB je public_47e4f1
  JMPTB cmp eax, 0x1D
  JMPTB mov ecx, 2
  JMPTB je public_47e4f1
  JMPTB cmp eax, 0x1E
  JMPTB mov ecx, 2
  JMPTB je public_47e4f1
  JMPTB cmp eax, 0x1F
  JMPTB mov ecx, 2
  JMPTB je public_47e4f1
  JMPTB cmp eax, 0x20
  JMPTB mov ecx, 2
  JMPTB je public_47e4f1
  JMPTB cmp eax, 0x21
  JMPTB mov ecx, 2
  JMPTB je public_47e4f1
  JMPTB cmp eax, 0x22
  JMPTB mov ecx, 2
  JMPTB je public_47e4f1
  JMPTB cmp eax, 0x23
  JMPTB mov ecx, 3
  JMPTB je public_47e502
  JMPTB cmp eax, 0x24
  JMPTB mov ecx, 3
  JMPTB je public_47e502
  JMPTB cmp eax, 0x25
  JMPTB mov ecx, 3
  JMPTB je public_47e502
  JMPTB cmp eax, 0x26
  JMPTB mov ecx, 3
  JMPTB je public_47e502
  JMPTB cmp eax, 0x27
  JMPTB mov ecx, 3
  JMPTB je public_47e502
  JMPTB cmp eax, 0x28
  JMPTB mov ecx, 3
  JMPTB je public_47e502
  JMPTB cmp eax, 0x29
  JMPTB mov ecx, 3
  JMPTB je public_47e502
  JMPTB cmp eax, 0x2A
  JMPTB mov ecx, 3
  JMPTB je public_47e502
  JMPTB cmp eax, 0x2B
  JMPTB mov ecx, 3
  JMPTB je public_47e502
  JMPTB cmp eax, 0x2C
  JMPTB mov ecx, 3
  JMPTB je public_47e502
  JMPTB cmp eax, 0x2D
  JMPTB mov ecx, 3
  JMPTB je public_47e502
  JMPTB cmp eax, 0x2E
  JMPTB mov ecx, 3
  JMPTB je public_47e502
  JMPTB cmp eax, 0x2F
  JMPTB mov ecx, 3
  JMPTB je public_47e502
  JMPTB cmp eax, 0x30
  JMPTB mov ecx, 3
  JMPTB je public_47e502
  JMPTB cmp eax, 0x31
  JMPTB mov ecx, 3
  JMPTB je public_47e502
  JMPTB cmp eax, 0x32
  JMPTB mov ecx, 3
  JMPTB je public_47e502
  JMPTB cmp eax, 0x33
  JMPTB mov ecx, 3
  JMPTB je public_47e502
  JMPTB cmp eax, 0x34
  JMPTB mov ecx, 3
  JMPTB je public_47e502
  JMPTB cmp eax, 0x35
  JMPTB mov ecx, 3
  JMPTB je public_47e502
  JMPTB cmp eax, 0x36
  JMPTB mov ecx, 3
  JMPTB je public_47e502
  JMPTB cmp eax, 0x37
  JMPTB mov ecx, 3
  JMPTB je public_47e502
  JMPTB cmp eax, 0x38
  JMPTB mov ecx, 3
  JMPTB je public_47e502
  JMPTB cmp eax, 0x39
  JMPTB mov ecx, 3
  JMPTB je public_47e502
  JMPTB cmp eax, 0x3A
  JMPTB mov ecx, 3
  JMPTB je public_47e502
  JMPTB cmp eax, 0x3B
  JMPTB mov ecx, 3
  JMPTB je public_47e502
  JMPTB cmp eax, 0x3C
  JMPTB mov ecx, 3
  JMPTB je public_47e502
  JMPTB cmp eax, 0x3D
  JMPTB mov ecx, 3
  JMPTB je public_47e502
  JMPTB cmp eax, 0x3E
  JMPTB mov ecx, 3
  JMPTB je public_47e502
  JMPTB cmp eax, 0x3F
  JMPTB mov ecx, 3
  JMPTB je public_47e502
  JMPTB cmp eax, 0x40
  JMPTB mov ecx, 3
  JMPTB je public_47e502
  JMPTB int 3
        public_47e4f1 : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 
        public_47e4f8 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        ret 
        public_47e502 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 2
        pop ebx
        ret 
        public_47e50c : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 3
        pop ebx
        ret 
        public_47e516 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 4
        pop ebx
        ret 
        public_47e520 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 5
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x47e460)
        ASM_EXPORT_ENTRY_SINGLE(0x47e516, public_47e516)
    }
}

#undef public_47e4c2
#undef public_47e4f1
#undef public_47e4f8
#undef public_47e502
#undef public_47e50c
#undef public_47e516
#undef public_47e520

#pragma init_seg(compiler)
extern "C" void const* const public_47e516 = __AsmFindLabelExport(&internal_47e460, 0x47e516);
