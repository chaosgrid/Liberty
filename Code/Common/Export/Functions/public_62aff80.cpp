#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6285cb0);
CLANG_FORWARD_PROC_SYMBOL(public_628b030);
CLANG_FORWARD_PROC_SYMBOL(public_62aa980);
CLANG_FORWARD_PROC_SYMBOL(public_62ac2e0);
CLANG_FORWARD_PROC_SYMBOL(public_62ad540);
CLANG_FORWARD_PROC_SYMBOL(public_62aff80);
CLANG_FORWARD_PROC_SYMBOL(public_62d3d70);
CLANG_FORWARD_PROC_SYMBOL(public_62d3eb0);
CLANG_FORWARD_PROC_SYMBOL(public_62d4ba0);
CLANG_FORWARD_PROC_SYMBOL(public_62db130);
CLANG_FORWARD_PROC_SYMBOL(public_630ef30);

#define public_62aff95 _public_62aff95
#define public_62aff97 _public_62aff97
#define public_62affce _public_62affce
#define public_62affd0 _public_62affd0
#define public_62affe3 _public_62affe3
#define public_62affe5 _public_62affe5
#define public_62b013e _public_62b013e
#define public_62b017b _public_62b017b
#define public_62b017d _public_62b017d
#define public_62b01ae _public_62b01ae
#define public_62b01b0 _public_62b01b0
#define public_62b01dc _public_62b01dc

PROC_DECLARE(0x62aff80, internal_62aff80, public_62aff80);
extern "C" NAKED register_t __cdecl internal_62aff80()
{
    __asm
    {
        sub esp, 0x30
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_62aff95
        lea ecx, ds:[eax-8]
        jmp public_62aff97
        public_62aff95 : nop
        xor ecx, ecx
        public_62aff97 : nop
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x150]
        mov ebp, eax
        mov eax, dword ptr ds : [edi+0x28]
        test al, 0x20
        je public_62b013e
        push 0
        mov ecx, ebp
        call public_62ad540
        test ebp, ebp
        je public_62affce
        mov ecx, dword ptr ss : [ebp+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        jne public_62affce
        mov ecx, ebp
        jmp public_62affd0
        public_62affce : nop
        xor ecx, ecx
        public_62affd0 : nop
        push 7
        call public_62ac2e0
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_62affe3
        add eax, 0xFFFFFFF8
        jmp public_62affe5
        public_62affe3 : nop
        xor eax, eax
        public_62affe5 : nop
        mov edx, dword ptr ds : [eax+4]
        lea ecx, ds:[eax+4]
        push 0
        call dword ptr ds : [edx]
        mov eax, dword ptr ds : [edi+0x2C]
        mov ecx, dword ptr ds : [edi+0x24]
        push eax
        lea ebx, ds:[edi+0x50]
        push ebx
        lea esi, ds:[edi+0x34]
        push esi
        call public_62aa980
        fld dword ptr ds : [ebx+8]
        fld dword ptr ds : [ebx+0x14]
        sub esp, 0xC
        fld dword ptr ds : [ebx+0x20]
        lea ecx, ss:[esp+0x1C]
        fchs 
        fstp dword ptr ss : [esp+8]
        fchs 
        fstp dword ptr ss : [esp+4]
        fchs 
        fstp dword ptr ss : [esp]
        call public_628b030
        fld dword ptr ss : [esp+0x18]
        sub esp, 0xC
        fmul dword ptr ds : [public_639e570]
        lea ecx, ss:[esp+0x28]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [public_639e570]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [public_639e570]
        fstp dword ptr ss : [esp]
        call public_628b030
        fld dword ptr ss : [esp+0x1C]
        push 0
        fadd dword ptr ds : [esi]
        lea ecx, ss:[esp+0x38]
        push ecx
/*FIXUP push offset public_639e5b8 @0x62b006b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639e5b8
        fstp dword ptr ds : [esi]
        fld dword ptr ss : [esp+0x2C]
        fadd dword ptr ds : [esi+4]
        fstp dword ptr ds : [esi+4]
        fld dword ptr ss : [esp+0x30]
        fadd dword ptr ds : [esi+8]
        fstp dword ptr ds : [esi+8]
        mov edx, dword ptr ss : [ebp+4]
        push edx
        call public_630ef30
        fld dword ptr ss : [ebp+0x34]
        fsub dword ptr ss : [esp+0x4C]
        add esp, 4
        lea ecx, ss:[esp+0x28]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [ebp+0x30]
        fsub dword ptr ss : [esp+0x44]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [ebp+0x2C]
        fsub dword ptr ss : [esp+0x40]
        fstp dword ptr ss : [esp]
        call public_628b030
        fld dword ptr ss : [esp+0x1C]
        fadd dword ptr ds : [esi]
        fstp dword ptr ds : [esi]
        fld dword ptr ss : [esp+0x20]
        fadd dword ptr ds : [esi+4]
        fstp dword ptr ds : [esi+4]
        fld dword ptr ss : [esp+0x24]
        fadd dword ptr ds : [esi+8]
        fstp dword ptr ds : [esi+8]
        fld dword ptr ds : [ebx+8]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ds : [ebx+0x14]
        mov ecx, dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ds : [ebx+0x20]
        mov edx, dword ptr ss : [esp+0x14]
        lea eax, ds:[edi+0x40]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], edx
        fstp dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax+8], ecx
        fld dword ptr ds : [public_639e568]
        fmul dword ptr ds : [public_639e560]
        lea edx, ds:[edi+8]
        push ebp
        push edx
        fstp dword ptr ds : [edi+0x74]
        call public_6285cb0
        mov eax, dword ptr ds : [edi+0x24]
        mov ecx, dword ptr ds : [eax+0x88]
        mov al, byte ptr ds : [ecx+0x81]
        add esp, 8
        test al, al
        sete dl
        mov byte ptr ds : [edi+0x4C], dl
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x30
        ret 
        public_62b013e : nop
        test eax, 0x200100
        je public_62b01dc
        lea ecx, ss:[esp+0x1C]
        call public_62db130
        mov eax, dword ptr ds : [edi+0x24]
        mov ecx, dword ptr ds : [eax+0xB0]
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        mov edx, dword ptr ds : [edi+0x2C]
        mov ebx, 1
        mov dword ptr ss : [esp+0x28], ecx
        mov dword ptr ss : [esp+0x2C], edx
        mov dword ptr ss : [esp+0x30], ebx
        je public_62b017b
        add eax, 0xFFFFFFF8
        jmp public_62b017d
        public_62b017b : nop
        xor eax, eax
        public_62b017d : nop
        push eax
        call public_62d4ba0
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_62b01dc
        add edi, 0x18
        push edi
        mov ecx, esi
        call public_62d3eb0
        test ebp, ebp
        je public_62b01ae
        mov eax, dword ptr ss : [ebp+0x4C]
        and eax, 0x103
        cmp eax, 0x103
        jne public_62b01ae
        mov ecx, ebp
        jmp public_62b01b0
        public_62b01ae : nop
        xor ecx, ecx
        public_62b01b0 : nop
        push 6
        call public_62ac2e0
        mov ecx, dword ptr ss : [esp+0x24]
        lea edx, ss:[esp+0x1C]
        push edx
        lea eax, ss:[esp+0x38]
        mov dword ptr ss : [esp+0x3C], ecx
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x3C], ebx
        mov dword ptr ss : [esp+0x44], 8
        call public_62d3d70
        public_62b01dc : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x30
        ret 
        UNREACHABLE_TRAP(0x62aff80)
    }
}

#undef public_62aff95
#undef public_62aff97
#undef public_62affce
#undef public_62affd0
#undef public_62affe3
#undef public_62affe5
#undef public_62b013e
#undef public_62b017b
#undef public_62b017d
#undef public_62b01ae
#undef public_62b01b0
#undef public_62b01dc
