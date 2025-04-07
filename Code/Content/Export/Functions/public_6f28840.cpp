#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eea860);
CLANG_FORWARD_PROC_SYMBOL(public_6efcb20);
CLANG_FORWARD_PROC_SYMBOL(public_6efccd0);
CLANG_FORWARD_PROC_SYMBOL(public_6f1e390);
CLANG_FORWARD_PROC_SYMBOL(public_6f57740);
CLANG_FORWARD_PROC_SYMBOL(public_6f57b00);
CLANG_FORWARD_PROC_SYMBOL(public_6f57c60);
CLANG_FORWARD_PROC_SYMBOL(public_6f57c80);
CLANG_FORWARD_PROC_SYMBOL(public_6f67090);
CLANG_FORWARD_PROC_SYMBOL(public_6f68e30);
CLANG_FORWARD_PROC_SYMBOL(public_6f739c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f93790);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fae458);

#define public_6f288d4 _public_6f288d4
#define public_6f288ea _public_6f288ea
#define public_6f28909 _public_6f28909
#define public_6f2891f _public_6f2891f
#define public_6f28924 _public_6f28924
#define public_6f28940 _public_6f28940
#define public_6f2898b _public_6f2898b
#define public_6f28a22 _public_6f28a22
#define public_6f28a36 _public_6f28a36
#define public_6f28a4b _public_6f28a4b
#define public_6f28a70 _public_6f28a70
#define public_6f28ab3 _public_6f28ab3

PROC_DECLARE(0x6f28840, internal_6f28840, public_6f28840);
extern "C" NAKED register_t __cdecl internal_6f28840()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fae458 @0x6f28842*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fae458
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x64
        push ebx
        push ebp
        mov ebp, ecx
        mov ecx, dword ptr ss : [esp+0x7C]
        mov eax, dword ptr ds : [ecx]
        push esi
        push edi
        call dword ptr ds : [eax+4]
        mov cl, byte ptr ss : [esp+0x84]
        xor ebx, ebx
        push ebx
        mov byte ptr ss : [esp+0x24], cl
        push ebx
        lea ecx, ss:[esp+0x28]
        mov byte ptr ss : [esp+0x1B], 1
        call public_6f93790
        mov dword ptr ss : [esp+0x24], eax
        mov dword ptr ss : [esp+0x28], ebx
        mov ecx, dword ptr ss : [esp+0x84]
        mov dword ptr ss : [esp+0x7C], ebx
        call public_6eea860
        lea edx, ss:[esp+0x84]
        mov dword ptr ss : [esp+0x1C], eax
        mov eax, dword ptr ss : [esp+0x24]
        push edx
        push eax
        lea ecx, ss:[esp+0x20]
        push ecx
        lea ecx, ss:[esp+0x2C]
        call public_6f1e390
        mov ecx, dword ptr ss : [ebp+0x10C]
        mov eax, dword ptr ds : [ecx+0x38]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x14], 0xFFFFFFFF
        jne public_6f288d4
        xor edx, edx
        jmp public_6f288ea
        public_6f288d4 : nop
        mov edx, dword ptr ds : [ecx+0x3C]
        sub edx, eax
        mov eax, 0x4EC4EC4F
        imul edx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6f288ea : nop
        dec edx
        push edx
        call public_6efccd0
        test al, al
        je public_6f28924
        mov eax, dword ptr ss : [ebp+0x10C]
        mov edx, dword ptr ds : [eax+0x38]
        add eax, 0x34
        cmp edx, ebx
        jne public_6f28909
        xor edx, edx
        jmp public_6f2891f
        public_6f28909 : nop
        mov ecx, dword ptr ds : [eax+8]
        sub ecx, edx
        mov eax, 0x4EC4EC4F
        imul ecx
        sar edx, 4
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        public_6f2891f : nop
        dec edx
        mov dword ptr ss : [esp+0x14], edx
        public_6f28924 : nop
        mov esi, dword ptr ss : [ebp+0x114]
        cmp esi, dword ptr ss : [ebp+0x118]
        mov dword ptr ss : [esp+0x18], esi
        je public_6f28a4b
        lea ebx, ds:[ebx]
        public_6f28940 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        push esi
        call public_6f739c0
        mov edi, eax
        test edi, edi
        je public_6f28a36
        mov ecx, dword ptr ss : [esp+0x84]
        test ecx, ecx
        je public_6f28a36
        mov eax, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [ecx+4]
        je public_6f28a36
        mov eax, dword ptr ds : [edi+0x14C]
        test eax, eax
        je public_6f2898b
        cmp dword ptr ds : [edi+0x154], 0xFFFFFFFF
        je public_6f2898b
        push edi
        call public_6f67090
        add esp, 4
        public_6f2898b : nop
        lea ecx, ss:[esp+0x50]
        call dword ptr ds : [public_6fb3198]
        mov edx, dword ptr ss : [esp+0x84]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [esp+0x5C], eax
        mov eax, dword ptr ss : [esp+0x14]
        push eax
        lea ecx, ss:[esp+0x3C]
        push ecx
        mov ecx, dword ptr ss : [ebp+0x10C]
        mov dword ptr ss : [esp+0x68], 0x447A0000
        call public_6efcb20
        mov ecx, dword ptr ss : [ebp+0x10C]
        push ebx
        lea edx, ss:[esp+0x48]
        push edx
        mov esi, eax
        call public_6efcb20
        fld dword ptr ds : [eax+8]
        fsub dword ptr ds : [esi+8]
        inc ebx
        fld dword ptr ds : [eax+4]
        fsub dword ptr ds : [esi+4]
        fld dword ptr ds : [eax]
        fsub dword ptr ds : [esi]
        fstp dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x64], eax
        fstp dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ss : [esp+0x30]
        mov dword ptr ss : [esp+0x68], ecx
        fstp dword ptr ss : [esp+0x34]
        mov edx, dword ptr ss : [esp+0x34]
        mov ecx, edi
        mov dword ptr ss : [esp+0x6C], edx
        call public_6f57740
        mov eax, dword ptr ss : [esp+0x58]
        test eax, eax
        jne public_6f28a22
        mov ecx, edi
        call public_6f57c80
        mov dword ptr ss : [esp+0x58], eax
        public_6f28a22 : nop
        lea eax, ss:[esp+0x50]
        push eax
        mov ecx, edi
        call public_6f57c60
        mov esi, dword ptr ss : [esp+0x18]
        mov byte ptr ss : [esp+0x13], al
        public_6f28a36 : nop
        mov eax, dword ptr ss : [ebp+0x118]
        add esi, 0x34
        cmp esi, eax
        mov dword ptr ss : [esp+0x18], esi
        jne public_6f28940
        public_6f28a4b : nop
        mov ecx, dword ptr ss : [esp+0x84]
        call public_6f57b00
        mov edi, dword ptr ss : [esp+0x24]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        mov dword ptr ss : [esp+0x7C], 0xFFFFFFFF
        je public_6f28ab3
        lea esp, ss:[esp]
        public_6f28a70 : nop
        push 0
        lea ecx, ss:[esp+0x1C]
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push ecx
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x24], eax
        call public_6f68e30
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [edx], ecx
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [edx+4], ecx
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x2C]
        add esp, 4
        dec ecx
        cmp esi, edi
        mov dword ptr ss : [esp+0x28], ecx
        jne public_6f28a70
        mov edi, dword ptr ss : [esp+0x24]
        public_6f28ab3 : nop
        push edi
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x78]
        mov al, byte ptr ss : [esp+0x17]
        add esp, 4
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x70
        ret 4
        UNREACHABLE_TRAP(0x6f28840)
    }
}

#undef public_6f288d4
#undef public_6f288ea
#undef public_6f28909
#undef public_6f2891f
#undef public_6f28924
#undef public_6f28940
#undef public_6f2898b
#undef public_6f28a22
#undef public_6f28a36
#undef public_6f28a4b
#undef public_6f28a70
#undef public_6f28ab3
