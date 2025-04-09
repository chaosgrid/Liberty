#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_402d30);
CLANG_FORWARD_PROC_SYMBOL(public_402e30);
CLANG_FORWARD_PROC_SYMBOL(public_4034a0);
CLANG_FORWARD_PROC_SYMBOL(public_559900);

#define public_559913 _public_559913
#define public_559921 _public_559921
#define public_55995f _public_55995f
#define public_559987 _public_559987
#define public_5599ad _public_5599ad
#define public_5599bf _public_5599bf
#define public_5599ea _public_5599ea
#define public_559a13 _public_559a13
#define public_559a20 _public_559a20
#define public_559a24 _public_559a24

PROC_DECLARE(0x559900, internal_559900, public_559900);
extern "C" NAKED register_t __cdecl internal_559900()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 0x28
        push ebx
        mov ebx, dword ptr ss : [esp+0x30]
        test ebx, ebx
        jne public_559913
        xor al, al
        pop ebx
        add esp, 0x28
        ret 
        public_559913 : nop
        mov ecx, dword ptr ds : [ebx+0x1C]
        test ecx, ecx
        jne public_559921
        xor al, al
        pop ebx
        add esp, 0x28
        ret 
        public_559921 : nop
        mov eax, dword ptr ds : [public_5c6d4c]
        mov ecx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push esi
        push edi
        lea esi, ss:[esp+0x20]
        push esi
        push 0
        push ecx
        push eax
        call dword ptr ds : [edx+0x58]
        mov eax, dword ptr ss : [esp+0x48]
        cmp eax, 3
        mov ecx, 5
        lea esi, ss:[esp+0x20]
        lea edi, ss:[esp+0xC]
        rep movsd
        pop edi
        pop esi
        ja public_559a24
/*FIXUP jmp dword ptr ds : [eax*4+public_559a84] @0x559958*/
  JMPTB cmp eax, 0
  JMPTB je public_55995f
  JMPTB cmp eax, 1
  JMPTB je public_559987
  JMPTB cmp eax, 2
  JMPTB je public_5599bf
  JMPTB cmp eax, 3
  JMPTB je public_5599ea
  JMPTB int 3
        public_55995f : nop
        fld dword ptr ds : [ebx+0x10]
        fadd dword ptr ds : [public_5d748c]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [ebx+0x14]
        fadd dword ptr ds : [public_5d748c]
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ds : [ebx+0x18]
        fadd dword ptr ds : [ebx+0x10]
        fsub dword ptr ds : [public_5d748c]
        jmp public_5599ad
        public_559987 : nop
        fld dword ptr ds : [ebx+0x18]
        fadd dword ptr ds : [ebx+0x10]
        fsub dword ptr ds : [public_5d748c]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [ebx+0x14]
        fadd dword ptr ds : [public_5d748c]
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ds : [ebx+0x10]
        fadd dword ptr ds : [public_5d748c]
        public_5599ad : nop
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ds : [ebx+0x18]
        fadd dword ptr ds : [ebx+0x14]
        fsub dword ptr ds : [public_5d748c]
        jmp public_559a20
        public_5599bf : nop
        fld dword ptr ds : [ebx+0x10]
        fadd dword ptr ds : [public_5d748c]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [ebx+0x18]
        fadd dword ptr ds : [ebx+0x14]
        fsub dword ptr ds : [public_5d748c]
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ds : [ebx+0x18]
        fadd dword ptr ds : [ebx+0x10]
        fsub dword ptr ds : [public_5d748c]
        jmp public_559a13
        public_5599ea : nop
        fld dword ptr ds : [ebx+0x18]
        fadd dword ptr ds : [ebx+0x10]
        fsub dword ptr ds : [public_5d748c]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [ebx+0x18]
        fadd dword ptr ds : [ebx+0x14]
        fsub dword ptr ds : [public_5d748c]
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ds : [ebx+0x10]
        fadd dword ptr ds : [public_5d748c]
        public_559a13 : nop
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ds : [ebx+0x14]
        fadd dword ptr ds : [public_5d748c]
        public_559a20 : nop
        fstp dword ptr ss : [esp+0x14]
        public_559a24 : nop
        mov edx, dword ptr ds : [public_679a28]
        push edx
        call public_402d30
        push 1
        lea eax, ss:[esp+0xC]
        push 2
        push eax
        call public_402e30
        mov ecx, dword ptr ss : [esp+0x54]
        mov eax, dword ptr ss : [esp+0x48]
        mov edx, dword ptr ss : [esp+0x4C]
        push 0
        push ecx
        xor ecx, ecx
        mov ch, byte ptr ds : [eax+3]
        push edx
        movzx edx, byte ptr ds : [eax+1]
        mov cl, byte ptr ds : [eax]
        movzx eax, byte ptr ds : [eax+2]
        shl ecx, 8
        or ecx, edx
        shl ecx, 8
        or ecx, eax
        push ecx
        mov ecx, dword ptr ss : [esp+0x54]
        push ecx
/*FIXUP push offset public_67dbf8 @0x559a6d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67dbf8
        call public_4034a0
        add esp, 0x28
        mov al, 1
        pop ebx
        add esp, 0x28
        ret 
        UNREACHABLE_TRAP(0x559900)
        ASM_EXPORT_ENTRY_SINGLE(0x5599ea, public_5599ea)
    }
}

#undef public_559913
#undef public_559921
#undef public_55995f
#undef public_559987
#undef public_5599ad
#undef public_5599bf
#undef public_5599ea
#undef public_559a13
#undef public_559a20
#undef public_559a24

#pragma init_seg(compiler)
extern "C" void const* const public_5599ea = __AsmFindLabelExport(&internal_559900, 0x5599ea);
