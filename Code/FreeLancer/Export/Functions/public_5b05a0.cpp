#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4347e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b05a0);

#define public_5b05f7 _public_5b05f7
#define public_5b0619 _public_5b0619
#define public_5b0631 _public_5b0631
#define public_5b063d _public_5b063d
#define public_5b0672 _public_5b0672
#define public_5b06e3 _public_5b06e3
#define public_5b0759 _public_5b0759
#define public_5b079d _public_5b079d
#define public_5b07e1 _public_5b07e1

PROC_DECLARE(0x5b05a0, internal_5b05a0, public_5b05a0);
extern "C" NAKED register_t __cdecl internal_5b05a0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [esp+8]
        sub esp, 0x200
        sub eax, 0x110
        push esi
        je public_5b063d
        dec eax
        jne public_5b0631
        mov esi, dword ptr ss : [esp+0x208]
        push 0x84
        push esi
        call dword ptr ds : [public_5c7274]
        push 0
        push 0
        push 0xF0
        push eax
        call dword ptr ds : [public_5c72e0]
        mov ecx, dword ptr ss : [esp+0x210]
        dec ecx
        cmp ecx, 6
        ja public_5b0631
/*FIXUP movzx edx, byte ptr ds : [ecx+public_5b0808] @0x5b05e9*/
/*FIXUP jmp dword ptr ds : [edx*4+public_5b07fc] @0x5b05f0*/
  JMPTB cmp ecx, 0
  JMPTB mov edx, 0
  JMPTB je public_5b05f7
  JMPTB cmp ecx, 1
  JMPTB mov edx, 1
  JMPTB je public_5b0619
  JMPTB cmp ecx, 2
  JMPTB mov edx, 2
  JMPTB je public_5b0631
  JMPTB cmp ecx, 3
  JMPTB mov edx, 2
  JMPTB je public_5b0631
  JMPTB cmp ecx, 4
  JMPTB mov edx, 2
  JMPTB je public_5b0631
  JMPTB cmp ecx, 5
  JMPTB mov edx, 0
  JMPTB je public_5b05f7
  JMPTB cmp ecx, 6
  JMPTB mov edx, 1
  JMPTB je public_5b0619
  JMPTB int 3
        public_5b05f7 : nop
        test eax, eax
        push 1
        sete al
        push esi
        mov byte ptr ds : [public_67a439], al
        call dword ptr ds : [public_5c724c]
        mov eax, 1
        pop esi
        add esp, 0x200
        ret 0x10
        public_5b0619 : nop
        push 2
        push esi
        call dword ptr ds : [public_5c724c]
        mov eax, 1
        pop esi
        add esp, 0x200
        ret 0x10
        public_5b0631 : nop
        xor eax, eax
        pop esi
        add esp, 0x200
        ret 0x10
        public_5b063d : nop
        mov edx, dword ptr ds : [public_67eca8]
        push 0x100
        lea ecx, ss:[esp+8]
        push ecx
        push 0xD2
        push edx
        call public_4347e0
        add esp, 0x10
        test eax, eax
        jne public_5b0672
        lea eax, ss:[esp+4]
/*FIXUP push offset public_5c8ce0 @0x5b0663*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8ce0
        push eax
        call dword ptr ds : [public_5c70b4]
        add esp, 8
        public_5b0672 : nop
        mov esi, dword ptr ss : [esp+0x208]
        push ebx
        push ebp
        push edi
        mov edi, dword ptr ds : [public_616438]
        lea ecx, ss:[esp+0x10]
        push ecx
        push esi
        call edi
        mov ebx, dword ptr ds : [public_5c7274]
        push 0x83
        push esi
        call ebx
        mov edx, dword ptr ss : [esp+0x220]
        mov ecx, dword ptr ds : [edx]
        push ecx
        push eax
        call edi
        push 0x84
        push esi
        call ebx
        push 0x100
        lea edx, ss:[esp+0x14]
        push edx
        mov ebp, eax
        mov eax, dword ptr ds : [public_67eca8]
        push 0x86
        push eax
        call public_4347e0
        add esp, 0x10
        test eax, eax
        jne public_5b06e3
        lea ecx, ss:[esp+0x10]
/*FIXUP push offset public_5c8ce0 @0x5b06d4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8ce0
        push ecx
        call dword ptr ds : [public_5c70b4]
        add esp, 8
        public_5b06e3 : nop
        lea edx, ss:[esp+0x10]
        push edx
        push ebp
        call edi
        mov dl, byte ptr ds : [public_67a439]
        xor eax, eax
        test dl, dl
        sete al
        push 0
        push eax
        push 0xF1
        push ebp
        call dword ptr ds : [public_5c72e0]
        mov al, byte ptr ds : [public_67a439]
        xor ecx, ecx
        test al, al
        sete cl
        push ecx
        push ebp
        call dword ptr ds : [public_616424]
        push 0x85
        push esi
        call ebx
        push 0x100
        lea edx, ss:[esp+0x14]
        push edx
        mov ebp, eax
        mov eax, dword ptr ds : [public_67eca8]
        push 0x87
        push eax
        call public_4347e0
        add esp, 0x10
        test eax, eax
        jne public_5b0759
        lea ecx, ss:[esp+0x10]
/*FIXUP push offset public_5c8ce0 @0x5b074a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8ce0
        push ecx
        call dword ptr ds : [public_5c70b4]
        add esp, 8
        public_5b0759 : nop
        lea edx, ss:[esp+0x10]
        push edx
        push ebp
        call edi
        push 6
        push esi
        call ebx
        mov ecx, dword ptr ds : [public_67eca8]
        mov ebp, eax
        push 0x100
        lea eax, ss:[esp+0x14]
        push eax
        push 0x4DC
        push ecx
        call public_4347e0
        add esp, 0x10
        test eax, eax
        jne public_5b079d
        lea edx, ss:[esp+0x10]
/*FIXUP push offset public_5c8ce0 @0x5b078e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8ce0
        push edx
        call dword ptr ds : [public_5c70b4]
        add esp, 8
        public_5b079d : nop
        lea eax, ss:[esp+0x10]
        push eax
        push ebp
        call edi
        push 7
        push esi
        call ebx
        mov edx, dword ptr ds : [public_67eca8]
        push 0x100
        lea ecx, ss:[esp+0x14]
        push ecx
        push 0x4DD
        push edx
        mov esi, eax
        call public_4347e0
        add esp, 0x10
        test eax, eax
        jne public_5b07e1
        lea eax, ss:[esp+0x10]
/*FIXUP push offset public_5c8ce0 @0x5b07d2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8ce0
        push eax
        call dword ptr ds : [public_5c70b4]
        add esp, 8
        public_5b07e1 : nop
        lea ecx, ss:[esp+0x10]
        push ecx
        push esi
        call edi
        pop edi
        pop ebp
        pop ebx
        mov eax, 1
        pop esi
        add esp, 0x200
        ret 0x10
        UNREACHABLE_TRAP(0x5b05a0)
        ASM_EXPORT_ENTRY_SINGLE(0x5b0631, public_5b0631)
    }
}

#undef public_5b05f7
#undef public_5b0619
#undef public_5b0631
#undef public_5b063d
#undef public_5b0672
#undef public_5b06e3
#undef public_5b0759
#undef public_5b079d
#undef public_5b07e1

#pragma init_seg(compiler)
extern "C" void const* const public_5b0631 = __AsmFindLabelExport(&internal_5b05a0, 0x5b0631);
