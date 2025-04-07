#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_413df0);
CLANG_FORWARD_PROC_SYMBOL(public_4144b0);
CLANG_FORWARD_PROC_SYMBOL(public_4144f0);
CLANG_FORWARD_PROC_SYMBOL(public_41dde0);
CLANG_FORWARD_PROC_SYMBOL(public_423b90);
CLANG_FORWARD_PROC_SYMBOL(public_444e20);
CLANG_FORWARD_PROC_SYMBOL(public_445280);
CLANG_FORWARD_PROC_SYMBOL(public_445dc0);
CLANG_FORWARD_PROC_SYMBOL(public_4be370);
CLANG_FORWARD_PROC_SYMBOL(public_5792b0);
CLANG_FORWARD_PROC_SYMBOL(public_59daa0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5b9855);

#define public_444a33 _public_444a33
#define public_444acc _public_444acc
#define public_444ad3 _public_444ad3
#define public_444b20 _public_444b20
#define public_444b6d _public_444b6d
#define public_444b8a _public_444b8a
#define public_444dfd _public_444dfd

PROC_DECLARE(0x4449d0, internal_4449d0, public_4449d0);
extern "C" NAKED register_t __cdecl internal_4449d0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5b9855 @0x4449d8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b9855
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xB4
        push ebx
        push ebp
        push esi
        push edi
        push 0x1B
        mov ebp, ecx
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_444dfd
        push 0x1C
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_444dfd
        mov eax, dword ptr ss : [ebp+0x36C]
        xor ebx, ebx
        cmp eax, 2
        jne public_444a33
        mov ecx, ebp
        mov dword ptr ss : [ebp+0x36C], ebx
        call public_445280
        mov byte ptr ss : [ebp+4], 1
        public_444a33 : nop
        mov eax, dword ptr ds : [public_5c6d90]
        mov ecx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [ecx]
        mov edx, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [edx+0x18]
        push eax
        mov eax, dword ptr ds : [public_5c6d90]
        mov ecx, dword ptr ds : [eax]
        push ecx
        call dword ptr ds : [esi+0x90]
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x10], edx
        mov edx, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [public_5c6d90]
        mov dword ptr ss : [esp+0x14], ecx
        mov ecx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x18], edx
        mov edx, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [edx+0x18]
        push eax
        mov eax, dword ptr ds : [public_5c6d90]
        mov ecx, dword ptr ds : [eax]
        push ecx
        call dword ptr ds : [esi+0x98]
        mov esi, eax
        cmp byte ptr ss : [ebp+0x3AC], bl
        mov ecx, 9
        lea edi, ss:[esp+0xA0]
        rep movsd
        je public_444acc
        mov ecx, 3
        lea edi, ss:[ebp+0x37C]
        lea esi, ss:[esp+0x10]
        xor edx, edx
        repe cmpsd
        jne public_444acc
        mov ecx, 9
        lea edi, ss:[ebp+0x388]
        lea esi, ss:[esp+0xA0]
        xor eax, eax
        repe cmpsd
        je public_444ad3
        public_444acc : nop
        mov byte ptr ss : [ebp+0x378], 1
        public_444ad3 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x14]
        lea ecx, ss:[ebp+0x37C]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [ecx+4], eax
        cmp dword ptr ss : [ebp+0x370], ebx
        mov dword ptr ds : [ecx+8], edx
        lea edi, ss:[ebp+0x388]
        mov ecx, 9
        lea esi, ss:[esp+0xA0]
        rep movsd
        mov byte ptr ss : [ebp+0x3AC], 1
        jne public_444b20
        cmp dword ptr ss : [ebp+0x374], ebx
        jne public_444b20
        cmp byte ptr ss : [ebp+0x378], bl
        je public_444b6d
        public_444b20 : nop
        mov eax, dword ptr ds : [public_5c6d40]
        fld qword ptr ss : [esp+0xD4]
        mov ecx, dword ptr ds : [eax]
        fstp dword ptr ss : [esp+0x28]
        mov edi, dword ptr ds : [ecx]
        mov esi, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ss : [ebp]
        push esi
        mov ecx, ebp
        call dword ptr ds : [edx+0x18]
        push eax
        mov eax, dword ptr ds : [public_5c6d40]
        mov ecx, dword ptr ds : [eax]
        push ecx
        call dword ptr ds : [edi+0x6C]
        mov edx, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ss : [ebp]
        mov edi, dword ptr ds : [eax]
        push esi
        push ebx
        mov ecx, ebp
        call dword ptr ds : [edx+0x18]
        push eax
        mov eax, dword ptr ds : [public_5c6d90]
        mov ecx, dword ptr ds : [eax]
        push ecx
        call dword ptr ds : [edi+0x6C]
        public_444b6d : nop
        call public_59daa0
        test eax, eax
        je public_444b8a
        push ebx
/*FIXUP push offset public_5cb128 @0x444b77*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb128
        call public_41dde0
        add esp, 8
        mov byte ptr ss : [ebp+0x2F8], bl
        public_444b8a : nop
        cmp byte ptr ss : [ebp+0x2F8], bl
        je public_444dfd
        cmp dword ptr ss : [ebp+0x2FC], ebx
        je public_444dfd
        mov dword ptr ss : [esp+0x44], ebx
        mov dword ptr ss : [esp+0x48], ebx
        lea ecx, ss:[esp+0x4C]
        mov dword ptr ss : [esp+0xCC], ebx
        call public_4144b0
        push 0xFFFFFFFF
        push ebx
        lea ecx, ss:[esp+0x4C]
        mov byte ptr ss : [esp+0xD4], 1
        mov dword ptr ss : [esp+0x48], ebx
        mov dword ptr ss : [esp+0x44], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x88], ebx
        call public_413df0
        mov byte ptr ss : [esp+0x9C], bl
        mov eax, dword ptr ss : [ebp+0x2FC]
        push 0xFFFFFFFF
        push eax
        lea ecx, ss:[esp+0x4C]
        mov dword ptr ss : [esp+0xD4], 2
        mov dword ptr ss : [esp+0x44], ebp
        call public_413df0
        mov ebp, dword ptr ss : [ebp+0x2F4]
        add ebp, 0x10
        mov edx, dword ptr ss : [ebp]
        mov dword ptr ss : [esp+0x2C], edx
        fild dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ss : [ebp+4]
        add eax, 0xFFFFFFE2
        fsub dword ptr ds : [public_67dc60]
        mov dword ptr ss : [esp+0x28], eax
        fld dword ptr ds : [public_67dc9c]
        mov ecx, dword ptr ss : [ebp+8]
        fdiv dword ptr ds : [public_67dc70]
        mov edx, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [esp+0x34], ecx
        mov dword ptr ss : [esp+0x38], edx
        mov esi, offset public_67dbfc
        lea edi, ss:[esp+0xA0]
        fmulp 
        fstp dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x10]
        fild dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x2C], eax
        lea eax, ss:[esp+0x2C]
        push eax
        fsub dword ptr ds : [public_67dc64]
        fld dword ptr ds : [public_67dc9c]
        fdiv dword ptr ds : [public_67dc74]
        fmulp 
        fstp dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x18]
        fld dword ptr ds : [public_67dc9c]
        mov dword ptr ss : [esp+0x34], ecx
        fchs 
        mov ecx, 9
        fstp dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x1C]
        rep movsd
        lea ecx, ss:[esp+0xA4]
        mov dword ptr ss : [esp+0x38], edx
        push ecx
        lea edx, ss:[esp+0x24]
        push edx
        call public_423b90
        mov eax, dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+0x30]
        mov edx, dword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x1C], eax
        fmul dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x20], ecx
        mov dword ptr ss : [esp+0x24], edx
        faddp 
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x30], 0
        mov byte ptr ss : [esp+0xA8], 1
        faddp 
        fsqrt 
        fdivr dword ptr ds : [public_5c75dc]
        fld dword ptr ss : [esp+0x28]
        fmul st, st(1)
        mov dword ptr ss : [esp+0x28], 0
        fstp dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x90], eax
        mov eax, dword ptr ss : [esp+0x28]
        fmul st, st(1)
        mov dword ptr ss : [esp+0x9C], eax
        lea eax, ss:[esp+0x48]
        fstp dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x94], ecx
        mov ecx, dword ptr ss : [esp+0x2C]
        fmul st, st(1)
        push eax
        mov dword ptr ss : [esp+0xA4], ecx
        fstp dword ptr ss : [esp+0x28]
        mov edx, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x9C], edx
        mov edx, dword ptr ss : [esp+0x34]
        fstp st(0)
        mov dword ptr ss : [esp+0xA8], edx
        call public_4be370
        add esp, 0x10
        lea ecx, ss:[esp+0x4C]
        mov dword ptr ss : [esp+0xCC], 3
        mov dword ptr ss : [esp+0x28], ecx
        lea ecx, ss:[esp+0x4C]
        mov byte ptr ss : [esp+0xCC], 5
        call public_4144f0
        mov edx, dword ptr ss : [esp+0x60]
        mov eax, dword ptr ss : [esp+0x5C]
        push edx
        push eax
        lea ecx, ss:[esp+0x60]
        mov byte ptr ss : [esp+0xD4], 4
        call public_445dc0
        mov ecx, dword ptr ss : [esp+0x5C]
        push ecx
        call public_5b7e1d
        add esp, 4
        lea ecx, ss:[esp+0x4C]
        mov dword ptr ss : [esp+0x5C], ebx
        mov dword ptr ss : [esp+0x60], ebx
        mov dword ptr ss : [esp+0x64], ebx
        mov byte ptr ss : [esp+0xCC], 3
        call public_444e20
        mov eax, dword ptr ss : [esp+0x44]
        cmp eax, ebx
        je public_444dfd
        push eax
        call dword ptr ds : [public_5c71d8]
        add esp, 4
        public_444dfd : nop
        mov ecx, dword ptr ss : [esp+0xC4]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0xC0
        ret 8
        UNREACHABLE_TRAP(0x4449d0)
    }
}

#undef public_444a33
#undef public_444acc
#undef public_444ad3
#undef public_444b20
#undef public_444b6d
#undef public_444b8a
#undef public_444dfd
