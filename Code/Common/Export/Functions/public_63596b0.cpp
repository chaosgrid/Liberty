#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6343fb0);
CLANG_FORWARD_PROC_SYMBOL(public_63473b0);
CLANG_FORWARD_PROC_SYMBOL(public_6347be0);
CLANG_FORWARD_PROC_SYMBOL(public_6351310);
CLANG_FORWARD_PROC_SYMBOL(public_6351f80);
CLANG_FORWARD_PROC_SYMBOL(public_6359340);
CLANG_FORWARD_PROC_SYMBOL(public_63596b0);
CLANG_FORWARD_JUMP_SYMBOL(public_639818b);

#define public_63596df _public_63596df
#define public_63596f7 _public_63596f7
#define public_6359700 _public_6359700
#define public_6359762 _public_6359762
#define public_635979c _public_635979c
#define public_63597b0 _public_63597b0
#define public_63597d5 _public_63597d5
#define public_63597d8 _public_63597d8
#define public_635980c _public_635980c
#define public_6359815 _public_6359815
#define public_6359823 _public_6359823
#define public_6359833 _public_6359833
#define public_6359836 _public_6359836

PROC_DECLARE(0x63596b0, internal_63596b0, public_63596b0);
extern "C" NAKED register_t __cdecl internal_63596b0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_639818b @0x63596b8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_639818b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x428
        push ebx
        push ebp
        push esi
        xor ebx, ebx
        mov esi, ecx
        mov bx, word ptr ds : [esi+0x12]
        push edi
        mov ebp, 0
        dec ebx
        js public_6359700
        public_63596df : nop
        mov eax, dword ptr ds : [esi+0x14]
        mov edi, dword ptr ds : [eax+ebx*4]
        mov ecx, dword ptr ds : [edi+0x1B4]
        cmp dword ptr ds : [ecx+0x20], ebp
        jne public_63596f7
        mov ecx, edi
        call public_63473b0
        public_63596f7 : nop
        dec ebx
        mov dword ptr ds : [edi+0x1B4], ebp
        jns public_63596df
        public_6359700 : nop
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [eax+0xF8]
        mov ecx, dword ptr ds : [eax+0xFC]
        mov dword ptr ss : [esp+0x10], edx
        mov edx, dword ptr ds : [eax+0x100]
        mov eax, dword ptr ds : [eax+0x104]
        mov dword ptr ss : [esp+0x18], edx
        fld dword ptr ss : [esp+0x18]
        fsub dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x14], ecx
        lea ecx, ss:[esp+0x38]
        fadd dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x34], ecx
        mov word ptr ss : [esp+0x30], 0x100
        fsub dword ptr ss : [esp+0x14]
        mov word ptr ss : [esp+0x32], bp
        fstp dword ptr ss : [esp+0x10]
        xor ebx, ebx
        mov bx, word ptr ds : [esi+0xA]
        mov dword ptr ss : [esp+0x440], ebp
        dec ebx
        js public_63597d8
        public_6359762 : nop
        mov edx, dword ptr ds : [esi+0xC]
        mov edi, dword ptr ds : [edx+ebx*4]
        test byte ptr ds : [edi], 0xC
        jne public_63597d5
        fld dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [esi]
        fcomp dword ptr ds : [public_63a53d8]
        mov dword ptr ss : [esp+0x28], ecx
        fnstsw ax
        test ah, 0x41
        jne public_635979c
        fld dword ptr ds : [public_63a53d0]
        mov eax, dword ptr ss : [esp+0x10]
        fdiv dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x20], eax
        fstp dword ptr ss : [esp+0x24]
        jmp public_63597b0
        public_635979c : nop
        mov edx, dword ptr ds : [ecx+0xAC]
        mov dword ptr ss : [esp+0x20], edx
        mov eax, dword ptr ds : [ecx+0xB0]
        mov dword ptr ss : [esp+0x24], eax
        public_63597b0 : nop
        lea ecx, ss:[esp+0x30]
        push ecx
        lea edx, ss:[esp+0x24]
        push edx
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x20], edi
        call public_6351310
        push edi
        mov ecx, esi
        mov dword ptr ds : [edi+0x1B4], ebp
        call public_6359340
        public_63597d5 : nop
        dec ebx
        jns public_6359762
        public_63597d8 : nop
        mov ecx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x30]
        push eax
        push ecx
        call public_6351f80
        mov eax, dword ptr ss : [esp+0x3C]
        lea edx, ss:[esp+0x40]
        add esp, 8
        cmp eax, edx
        mov dword ptr ss : [esp+0x440], 0xFFFFFFFF
        je public_6359815
        cmp eax, ebp
        je public_635980c
        push eax
        call public_6343fb0
        add esp, 4
        public_635980c : nop
        mov dword ptr ss : [esp+0x34], ebp
        mov word ptr ss : [esp+0x30], bp
        public_6359815 : nop
        xor edi, edi
        mov di, word ptr ds : [esi+0xA]
        mov word ptr ss : [esp+0x32], bp
        dec edi
        js public_6359836
        public_6359823 : nop
        mov eax, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ds : [eax+edi*4]
        test byte ptr ds : [ecx], 0xC
        jne public_6359833
        call public_6347be0
        public_6359833 : nop
        dec edi
        jns public_6359823
        public_6359836 : nop
        mov ecx, dword ptr ss : [esp+0x438]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x434
        ret 
        UNREACHABLE_TRAP(0x63596b0)
    }
}

#undef public_63596df
#undef public_63596f7
#undef public_6359700
#undef public_6359762
#undef public_635979c
#undef public_63597b0
#undef public_63597d5
#undef public_63597d8
#undef public_635980c
#undef public_6359815
#undef public_6359823
#undef public_6359833
#undef public_6359836
