#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_510990);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_5109b8 _public_5109b8
#define public_5109c9 _public_5109c9
#define public_510a0b _public_510a0b
#define public_510a1a _public_510a1a
#define public_510a20 _public_510a20
#define public_510a32 _public_510a32
#define public_510a3d _public_510a3d
#define public_510a7c _public_510a7c
#define public_510a86 _public_510a86
#define public_510abb _public_510abb
#define public_510adb _public_510adb
#define public_510aea _public_510aea
#define public_510af8 _public_510af8
#define public_510b4c _public_510b4c
#define public_510b57 _public_510b57
#define public_510b63 _public_510b63
#define public_510b6d _public_510b6d
#define public_510bbb _public_510bbb
#define public_510bbc _public_510bbc
#define public_510bc0 _public_510bc0

PROC_DECLARE(0x510990, internal_510990, public_510990);
extern "C" NAKED register_t __cdecl internal_510990()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ecx
        mov ecx, dword ptr ss : [esp+0xC]
        fld dword ptr ds : [public_5c7474]
        push ebx
        lea eax, ds:[ecx-2]
        cmp eax, 0xA
        push esi
        push edi
        ja public_510bc0
/*FIXUP movzx eax, byte ptr ds : [eax+public_510bd8] @0x5109aa*/
/*FIXUP jmp dword ptr ds : [eax*4+public_510bc8] @0x5109b1*/
  JMPTB cmp eax, 0
  JMPTB jne public_4c0000000000c077
  JMPTB mov eax, 0
  JMPTB public_4c0000000000c077 : nop
        je public_510abb
  JMPTB cmp eax, 1
  JMPTB jne public_4c0000000000c073
  JMPTB mov eax, 3
  JMPTB public_4c0000000000c073 : nop
        je public_510bc0
  JMPTB cmp eax, 2
  JMPTB jne public_4c0000000000c06f
  JMPTB mov eax, 1
  JMPTB public_4c0000000000c06f : nop
        je public_510a0b
  JMPTB cmp eax, 3
  JMPTB jne public_4c0000000000c06b
  JMPTB mov eax, 3
  JMPTB public_4c0000000000c06b : nop
        je public_510bc0
  JMPTB cmp eax, 4
  JMPTB jne public_4c0000000000c067
  JMPTB mov eax, 1
  JMPTB public_4c0000000000c067 : nop
        je public_510a0b
  JMPTB cmp eax, 5
  JMPTB jne public_4c0000000000c063
  JMPTB mov eax, 3
  JMPTB public_4c0000000000c063 : nop
        je public_510bc0
  JMPTB cmp eax, 6
  JMPTB jne public_4c0000000000c05f
  JMPTB mov eax, 3
  JMPTB public_4c0000000000c05f : nop
        je public_510bc0
  JMPTB cmp eax, 7
  JMPTB jne public_4c0000000000c05b
  JMPTB mov eax, 3
  JMPTB public_4c0000000000c05b : nop
        je public_510bc0
  JMPTB cmp eax, 8
  JMPTB jne public_4c0000000000c057
  JMPTB mov eax, 3
  JMPTB public_4c0000000000c057 : nop
        je public_510bc0
  JMPTB cmp eax, 9
  JMPTB jne public_4c0000000000c053
  JMPTB mov eax, 3
  JMPTB public_4c0000000000c053 : nop
        je public_510bc0
  JMPTB cmp eax, 0xA
  JMPTB jne public_4c0000000000c04f
  JMPTB mov eax, 2
  JMPTB public_4c0000000000c04f : nop
        je public_5109b8
  JMPTB int 3
        public_5109b8 : nop
        mov edx, dword ptr ss : [esp+0x14]
        fstp st(0)
        lea eax, ds:[edx+1]
        cmp eax, 0xC
        jle public_5109c9
        sub eax, 0xC
        public_5109c9 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [ecx+0x14]
        mov esi, dword ptr ds : [ecx+0x2B0]
        lea eax, ds:[eax+eax*2]
        fld dword ptr ds : [ecx+eax*8+0x10]
        mov eax, 2
        cmp esi, eax
        mov dword ptr ss : [esp+0x14], 1
        jle public_510bbc
        lea edx, ds:[edx+edx*2]
        fadd dword ptr ds : [ecx+edx*8+0x148]
        pop edi
        mov dword ptr ss : [esp+0x10], eax
        pop esi
        fidiv dword ptr ss : [esp+0xC]
        pop ebx
        pop ecx
        ret 0x10
        public_510a0b : nop
        cmp ecx, 6
        fstp st(0)
        fild dword ptr ss : [esp+0x14]
        jne public_510a1a
        fadd st(0), st
        jmp public_510a20
        public_510a1a : nop
        fmul qword ptr ds : [public_5db638]
        public_510a20 : nop
        call public_5b7ec0
        lea ebx, ds:[eax+1]
        mov esi, ebx
        cmp esi, 0xC
        jle public_510a32
        sub esi, 0xC
        public_510a32 : nop
        lea edx, ds:[eax+2]
        cmp edx, 0xC
        jle public_510a3d
        sub edx, 0xC
        public_510a3d : nop
        mov ecx, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [ecx+0x14]
        lea esi, ds:[esi+esi*2]
        fld dword ptr ds : [ecx+esi*8+0x10]
        lea edi, ds:[eax+eax*2]
        fadd st(0), st
        lea edi, ds:[ecx+edi*8]
        lea edx, ds:[edx+edx*2]
        mov dword ptr ss : [esp+0x14], 4
        fadd dword ptr ds : [edi+0x10]
        fadd dword ptr ds : [ecx+edx*8+0x10]
        cmp dword ptr ds : [ecx+0x2B0], 2
        jle public_510bbc
        lea edx, ds:[eax-1]
        test edx, edx
        jge public_510a7c
        add edx, 0xC
        public_510a7c : nop
        mov eax, ebx
        cmp eax, 0xB
        jle public_510a86
        sub eax, 0xC
        public_510a86 : nop
        lea edx, ds:[edx+edx*2]
        fadd dword ptr ds : [ecx+edx*8+0x148]
        lea eax, ds:[eax+eax*2]
        fld dword ptr ds : [edi+0x148]
        pop edi
        fmul qword ptr ds : [public_5db638]
        mov dword ptr ss : [esp+0x10], 9
        pop esi
        faddp 
        pop ebx
        fadd dword ptr ds : [ecx+eax*8+0x148]
        fidiv dword ptr ss : [esp+8]
        pop ecx
        ret 0x10
        public_510abb : nop
        fstp st(0)
        fild dword ptr ss : [esp+0x14]
        fmul qword ptr ds : [public_5db630]
        call public_5b7ec0
        lea edi, ds:[eax-1]
        cmp edi, 1
        mov dword ptr ss : [esp+0x18], edi
        jge public_510adb
        add edi, 0xC
        public_510adb : nop
        lea esi, ds:[eax+1]
        cmp esi, 0xC
        mov dword ptr ss : [esp+0xC], esi
        jle public_510aea
        sub esi, 0xC
        public_510aea : nop
        push ebp
        lea ebp, ds:[eax+2]
        mov edx, ebp
        cmp edx, 0xC
        jle public_510af8
        sub edx, 0xC
        public_510af8 : nop
        mov ecx, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ds : [ecx+0x14]
        lea ebx, ds:[eax+eax*2]
        lea edi, ds:[edi+edi*2]
        fld dword ptr ds : [ecx+edi*8+0x10]
        lea ebx, ds:[ecx+ebx*8]
        fld dword ptr ds : [ebx+0x10]
        fadd st(0), st
        lea esi, ds:[esi+esi*2]
        lea edx, ds:[edx+edx*2]
        lea edx, ds:[ecx+edx*8+0x10]
        faddp 
        mov dword ptr ss : [esp+0x18], 0xA
        fld dword ptr ds : [ecx+esi*8+0x10]
        fmul qword ptr ds : [public_5db628]
        faddp 
        fld dword ptr ds : [edx]
        fadd st(0), st
        faddp 
        fadd dword ptr ds : [edx]
        cmp dword ptr ds : [ecx+0x2B0], 2
        jle public_510bbb
        lea edi, ds:[eax-2]
        test edi, edi
        jge public_510b4c
        add edi, 0xC
        public_510b4c : nop
        mov esi, dword ptr ss : [esp+0x1C]
        test esi, esi
        jge public_510b57
        add esi, 0xC
        public_510b57 : nop
        mov edx, dword ptr ss : [esp+0x10]
        cmp edx, 0xB
        jle public_510b63
        sub edx, 0xC
        public_510b63 : nop
        mov eax, ebp
        cmp eax, 0xB
        jle public_510b6d
        sub eax, 0xC
        public_510b6d : nop
        lea edi, ds:[edi+edi*2]
        fadd dword ptr ds : [ecx+edi*8+0x148]
        lea esi, ds:[esi+esi*2]
        fld dword ptr ds : [ecx+esi*8+0x148]
        lea edx, ds:[edx+edx*2]
        fmul qword ptr ds : [public_5db638]
        lea eax, ds:[eax+eax*2]
        mov dword ptr ss : [esp+0x18], 0x18
        faddp 
        fld dword ptr ds : [ebx+0x148]
        fmul qword ptr ds : [public_5db630]
        faddp 
        fld dword ptr ds : [ecx+edx*8+0x148]
        fmul qword ptr ds : [public_5db638]
        faddp 
        fadd dword ptr ds : [ecx+eax*8+0x148]
        public_510bbb : nop
        pop ebp
        public_510bbc : nop
        fidiv dword ptr ss : [esp+0x14]
        public_510bc0 : nop
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret 0x10
        UNREACHABLE_TRAP(0x510990)
        ASM_EXPORT_ENTRY_SINGLE(0x510bc0, public_510bc0)
    }
}

#undef public_5109b8
#undef public_5109c9
#undef public_510a0b
#undef public_510a1a
#undef public_510a20
#undef public_510a32
#undef public_510a3d
#undef public_510a7c
#undef public_510a86
#undef public_510abb
#undef public_510adb
#undef public_510aea
#undef public_510af8
#undef public_510b4c
#undef public_510b57
#undef public_510b63
#undef public_510b6d
#undef public_510bbb
#undef public_510bbc
#undef public_510bc0

#pragma init_seg(compiler)
extern "C" void const* const public_510bc0 = __AsmFindLabelExport(&internal_510990, 0x510bc0);
