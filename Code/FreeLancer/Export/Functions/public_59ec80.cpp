#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_420d60);
CLANG_FORWARD_PROC_SYMBOL(public_420d70);
CLANG_FORWARD_PROC_SYMBOL(public_420f30);
CLANG_FORWARD_PROC_SYMBOL(public_59ec60);
CLANG_FORWARD_PROC_SYMBOL(public_59ec80);
CLANG_FORWARD_PROC_SYMBOL(public_59f5b0);
CLANG_FORWARD_JUMP_SYMBOL(public_5c4e98);

#define public_59ecef _public_59ecef
#define public_59ed1c _public_59ed1c
#define public_59edd6 _public_59edd6
#define public_59edee _public_59edee
#define public_59ee00 _public_59ee00
#define public_59ee0d _public_59ee0d
#define public_59ee32 _public_59ee32
#define public_59ee56 _public_59ee56
#define public_59ee97 _public_59ee97
#define public_59eea9 _public_59eea9
#define public_59eec8 _public_59eec8

PROC_DECLARE(0x59ec80, internal_59ec80, public_59ec80);
extern "C" NAKED register_t __cdecl internal_59ec80()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c4e98 @0x59ec82*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c4e98
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x4C
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x64]
        push esi
        mov ebp, ecx
        mov dword ptr ss : [esp+0x10], esi
        call dword ptr ds : [public_5c6d14]
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        add esp, 4
        lea edx, ss:[esp+0xC]
        push edx
        push eax
        call dword ptr ds : [ecx+0x44]
        cmp eax, 0xFFFFFFFF
        mov dword ptr ss : [esp+0x64], eax
        je public_59ed1c
        push eax
        mov ecx, ebp
        call public_420d70
        test al, al
        je public_59ecef
        mov ecx, dword ptr ss : [ebp+4]
        lea eax, ss:[ebp+0x14]
        push eax
/*FIXUP push offset _public_59ec60 @0x59ece0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_59ec60
        push ecx
        call dword ptr ds : [public_5c6620]
        add esp, 0xC
        public_59ecef : nop
        mov edx, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ss : [esp+0x64]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x3C]
        mov ecx, ebp
        call public_420d60
        pop esi
        pop ebp
        mov ecx, dword ptr ss : [esp+0x4C]
        mov dword ptr fs : [0], ecx
        add esp, 0x58
        ret 0xC
        public_59ed1c : nop
        push ebx
        xor ebx, ebx
        push edi
        mov dword ptr ss : [esp+0x10], ebx
        xor eax, eax
        mov dword ptr ss : [esp+0x2C], offset public_5c7388
        lea edx, ss:[esp+0x10]
        push edx
        mov ecx, 0xB
        lea edi, ss:[esp+0x34]
        rep stosd
        mov eax, dword ptr ds : [public_5c6dd8]
        mov dword ptr ss : [esp+0x3C], 0x80000000
        mov dword ptr ss : [esp+0x40], 1
        mov dword ptr ss : [esp+0x48], 3
        mov dword ptr ss : [esp+0x4C], 0x8000080
        mov dword ptr ss : [esp+0x38], esi
        mov dword ptr ss : [esp+0x2C], 0x34
        mov dword ptr ss : [esp+0x5C], 0xFFFFFFFF
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x2C]
        push edx
        push eax
        mov dword ptr ss : [esp+0x70], ebx
        call dword ptr ds : [ecx+0xC]
        test eax, eax
        jne public_59eea9
        mov eax, dword ptr ss : [esp+0x70]
        push eax
        push esi
        mov ecx, ebp
        call public_420f30
        mov al, byte ptr ss : [esp+0x74]
        test al, al
        je public_59ee56
        mov eax, dword ptr ss : [esp+0x10]
        lea ecx, ss:[ebp+0x10]
        push ecx
        lea edx, ss:[esp+0x70]
        push edx
        push eax
        call dword ptr ds : [public_5c6078]
        add esp, 0xC
        test al, al
        je public_59eea9
        mov edi, dword ptr ds : [public_67dcf8]
        cmp edi, ebx
        jne public_59edd6
        xor edx, edx
        jmp public_59edee
        public_59edd6 : nop
        mov ecx, dword ptr ds : [public_67dcfc]
        sub ecx, edi
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 1
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        public_59edee : nop
        mov esi, dword ptr ss : [esp+0x6C]
        xor eax, eax
        cmp edx, ebx
        jle public_59ee0d
        xor ecx, ecx
        lea ebx, ds:[ebx]
        public_59ee00 : nop
        cmp dword ptr ds : [ecx+edi], esi
        je public_59ee32
        inc eax
        add ecx, 0xC
        cmp eax, edx
        jl public_59ee00
        public_59ee0d : nop
        mov eax, dword ptr ds : [public_67dcfc]
        lea edx, ss:[esp+0x1C]
        push edx
        push eax
        mov ecx, offset public_67dcf4
        mov dword ptr ss : [esp+0x24], esi
        mov dword ptr ss : [esp+0x28], ebx
        mov dword ptr ss : [esp+0x2C], ebx
        call public_59f5b0
        mov esi, dword ptr ss : [esp+0x6C]
        public_59ee32 : nop
        push esi
        mov ecx, ebp
        call public_420d70
        test al, al
        je public_59eea9
        mov edx, dword ptr ss : [ebp+4]
        lea ecx, ss:[ebp+0x14]
        push ecx
/*FIXUP push offset _public_59ec60 @0x59ee45*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_59ec60
        push edx
        call dword ptr ds : [public_5c6620]
        add esp, 0xC
        jmp public_59eea9
        public_59ee56 : nop
        mov edx, dword ptr ss : [esp+0x10]
        lea eax, ss:[ebp+0x10]
        push eax
        lea ecx, ss:[esp+0x70]
        push ecx
        push edx
        call dword ptr ds : [public_5c6078]
        add esp, 0xC
        test al, al
        je public_59eea9
        mov eax, dword ptr ss : [esp+0x6C]
        push eax
        mov ecx, ebp
        call public_420d70
        test al, al
        je public_59ee97
        mov edx, dword ptr ss : [ebp+4]
        lea ecx, ss:[ebp+0x14]
        push ecx
/*FIXUP push offset _public_59ec60 @0x59ee88*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_59ec60
        push edx
        call dword ptr ds : [public_5c6620]
        add esp, 0xC
        public_59ee97 : nop
        mov eax, dword ptr ds : [public_5c6d90]
        mov edx, dword ptr ss : [esp+0x6C]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x3C]
        public_59eea9 : nop
        mov ecx, ebp
        call public_420d60
        mov bl, al
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        mov dword ptr ss : [esp+0x64], 0xFFFFFFFF
        je public_59eec8
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        public_59eec8 : nop
        mov ecx, dword ptr ss : [esp+0x5C]
        pop edi
        mov al, bl
        pop ebx
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x58
        ret 0xC
        UNREACHABLE_TRAP(0x59ec80)
    }
}

#undef public_59ecef
#undef public_59ed1c
#undef public_59edd6
#undef public_59edee
#undef public_59ee00
#undef public_59ee0d
#undef public_59ee32
#undef public_59ee56
#undef public_59ee97
#undef public_59eea9
#undef public_59eec8
