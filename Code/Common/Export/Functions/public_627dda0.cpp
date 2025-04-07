#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627e3b0);
CLANG_FORWARD_PROC_SYMBOL(public_627e7d0);
CLANG_FORWARD_PROC_SYMBOL(public_627ecf0);
CLANG_FORWARD_PROC_SYMBOL(public_627f190);
CLANG_FORWARD_PROC_SYMBOL(public_627f260);
CLANG_FORWARD_PROC_SYMBOL(public_627f620);
CLANG_FORWARD_PROC_SYMBOL(public_6289a70);
CLANG_FORWARD_PROC_SYMBOL(public_628e0b0);
CLANG_FORWARD_PROC_SYMBOL(public_62bed70);
CLANG_FORWARD_PROC_SYMBOL(public_6315b10);
CLANG_FORWARD_PROC_SYMBOL(public_632c410);
CLANG_FORWARD_PROC_SYMBOL(public_6343580);
CLANG_FORWARD_PROC_SYMBOL(public_6343670);
CLANG_FORWARD_PROC_SYMBOL(public_6343cc0);
CLANG_FORWARD_PROC_SYMBOL(public_6391cf0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_JUMP_SYMBOL(public_6392d81);

#define public_627de17 _public_627de17
#define public_627de6f _public_627de6f
#define public_627de7e _public_627de7e
#define public_627dea3 _public_627dea3
#define public_627dec1 _public_627dec1
#define public_627deda _public_627deda
#define public_627def0 _public_627def0
#define public_627df51 _public_627df51
#define public_627df60 _public_627df60
#define public_627df87 _public_627df87
#define public_627df95 _public_627df95
#define public_627dfa0 _public_627dfa0
#define public_627dfbd _public_627dfbd
#define public_627dfe7 _public_627dfe7
#define public_627e000 _public_627e000
#define public_627e049 _public_627e049
#define public_627e061 _public_627e061
#define public_627e087 _public_627e087
#define public_627e0c4 _public_627e0c4
#define public_627e0cb _public_627e0cb
#define public_627e0ef _public_627e0ef
#define public_627e102 _public_627e102
#define public_627e117 _public_627e117
#define public_627e127 _public_627e127
#define public_627e16c _public_627e16c
#define public_627e1f9 _public_627e1f9
#define public_627e233 _public_627e233
#define public_627e2de _public_627e2de
#define public_627e2ed _public_627e2ed
#define public_627e316 _public_627e316
#define public_627e34a _public_627e34a
#define public_627e357 _public_627e357
#define public_627e35f _public_627e35f

PROC_DECLARE(0x627dda0, internal_627dda0, public_627dda0);
extern "C" NAKED register_t __cdecl internal_627dda0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6392d81 @0x627dda2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6392d81
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xD8
        push ebx
        push ebp
        push esi
        lea eax, ss:[esp+0xF]
        push eax
        lea ecx, ss:[esp+0x58]
        call public_6315b10
        mov cl, byte ptr ss : [esp+0xF]
        xor ebx, ebx
        mov dword ptr ss : [esp+0xEC], ebx
        mov byte ptr ss : [esp+0x44], cl
        mov dword ptr ss : [esp+0x48], ebx
        mov dword ptr ss : [esp+0x4C], ebx
        mov dword ptr ss : [esp+0x50], ebx
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, offset public_63fbff8
        mov byte ptr ss : [esp+0xF0], 1
        call public_632c410
        mov eax, dword ptr ss : [esp+0x1C]
        cmp eax, dword ptr ds : [public_63fbffc]
        mov ebp, dword ptr ss : [esp+0xF4]
        je public_627deda
        public_627de17 : nop
        lea esi, ds:[eax+0x10]
        mov eax, dword ptr ds : [esi]
        mov eax, dword ptr ds : [eax+4]
        lea ecx, ss:[esp+0x10]
        push ecx
        lea ecx, ss:[esp+0x58]
        mov dword ptr ss : [esp+0x14], eax
        call public_627f260
        mov ecx, dword ptr ss : [esp+0x5C]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x20], eax
        jne public_627de6f
        lea edx, ss:[esp+0x10]
        push edx
        push ecx
        lea ecx, ss:[esp+0x5C]
        call public_628e0b0
        lea eax, ss:[esp+0x10]
        push eax
        lea ecx, ss:[esp+0x58]
        mov byte ptr ss : [esp+0x13], 1
        call public_627f260
        lea ecx, ss:[esp+0xF]
        push ecx
        lea edx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x1C], eax
        push edx
        jmp public_627de7e
        public_627de6f : nop
        lea eax, ss:[esp+0xF]
        push eax
        lea ecx, ss:[esp+0x24]
        mov byte ptr ss : [esp+0x13], 0
        push ecx
        public_627de7e : nop
        lea ecx, ss:[esp+0x2C]
        call public_62bed70
        mov al, byte ptr ss : [esp+0x28]
        test al, al
        je public_627dea3
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [edx+4]
        mov eax, dword ptr ds : [public_6399038]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push ebp
        push ecx
        push eax
        call dword ptr ds : [edx+0x6C]
        public_627dea3 : nop
        mov eax, dword ptr ds : [esi]
        cmp dword ptr ds : [eax+0x54], ebx
        je public_627dec1
        mov edx, dword ptr ss : [esp+0x4C]
        lea ecx, ss:[esp+0x14]
        push ecx
        push edx
        lea ecx, ss:[esp+0x4C]
        mov dword ptr ss : [esp+0x1C], esi
        call public_628e0b0
        public_627dec1 : nop
        lea ecx, ss:[esp+0x1C]
        call public_627f620
        mov eax, dword ptr ss : [esp+0x1C]
        cmp eax, dword ptr ds : [public_63fbffc]
        jne public_627de17
        public_627deda : nop
        mov eax, dword ptr ds : [public_63fbff0]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        push edi
        je public_627df95
        lea ebx, ds:[ebx]
        public_627def0 : nop
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [ecx]
        push ebp
        call dword ptr ds : [eax]
        mov ecx, dword ptr ds : [esi+0xC]
        mov eax, dword ptr ds : [ecx+4]
        lea edi, ds:[esi+0xC]
        lea edx, ss:[esp+0x14]
        push edx
        lea ecx, ss:[esp+0x5C]
        mov dword ptr ss : [esp+0x18], eax
        call public_627f260
        mov ecx, dword ptr ss : [esp+0x60]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x24], eax
        jne public_627df51
        lea eax, ss:[esp+0x14]
        push eax
        push ecx
        lea ecx, ss:[esp+0x60]
        call public_628e0b0
        lea ecx, ss:[esp+0x14]
        push ecx
        lea ecx, ss:[esp+0x5C]
        mov byte ptr ss : [esp+0x17], 1
        call public_627f260
        lea edx, ss:[esp+0x13]
        mov dword ptr ss : [esp+0x18], eax
        push edx
        lea eax, ss:[esp+0x1C]
        push eax
        jmp public_627df60
        public_627df51 : nop
        lea ecx, ss:[esp+0x13]
        push ecx
        lea edx, ss:[esp+0x28]
        mov byte ptr ss : [esp+0x17], 0
        push edx
        public_627df60 : nop
        lea ecx, ss:[esp+0x30]
        call public_62bed70
        mov eax, dword ptr ds : [edi]
        cmp dword ptr ds : [eax+0x54], ebx
        je public_627df87
        mov edx, dword ptr ss : [esp+0x50]
        lea ecx, ss:[esp+0x1C]
        push ecx
        push edx
        lea ecx, ss:[esp+0x50]
        mov dword ptr ss : [esp+0x24], edi
        call public_628e0b0
        public_627df87 : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [public_63fbff0]
        jne public_627def0
        public_627df95 : nop
        mov esi, dword ptr ss : [esp+0x5C]
        cmp esi, dword ptr ss : [esp+0x60]
        je public_627dfbd
        nop 
        public_627dfa0 : nop
        mov eax, dword ptr ds : [public_6399040]
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push ebx
        push edx
        push eax
        call dword ptr ds : [ecx+0x6C]
        mov eax, dword ptr ss : [esp+0x60]
        add esi, 4
        cmp esi, eax
        jne public_627dfa0
        public_627dfbd : nop
        lea eax, ss:[esp+0x37]
        push eax
        lea ecx, ss:[esp+0x3C]
        call public_6315b10
        mov eax, dword ptr ss : [esp+0x4C]
        cmp eax, dword ptr ss : [esp+0x50]
        mov ecx, eax
        mov byte ptr ss : [esp+0xF0], 2
        mov dword ptr ss : [esp+0x1C], ecx
        je public_627e117
        public_627dfe7 : nop
        mov eax, dword ptr ds : [ecx]
        add eax, 4
        mov dword ptr ss : [esp+0x24], eax
        mov eax, dword ptr ds : [eax+4]
        mov ebx, dword ptr ds : [eax]
        cmp ebx, eax
        je public_627e102
        lea ecx, ds:[ecx]
        public_627e000 : nop
        mov ecx, dword ptr ds : [ebx+8]
        lea edx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x14], ecx
        push edx
        lea ecx, ss:[esp+0x3C]
        call public_627f260
        mov ecx, dword ptr ss : [esp+0x40]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x18], eax
        jne public_627e049
        lea eax, ss:[esp+0x14]
        push eax
        push ecx
        lea ecx, ss:[esp+0x40]
        call public_628e0b0
        lea ecx, ss:[esp+0x14]
        push ecx
        lea ecx, ss:[esp+0x3C]
        call public_627f260
        mov dword ptr ss : [esp+0x28], eax
        mov byte ptr ss : [esp+0x2C], 1
        jmp public_627e061
        public_627e049 : nop
        lea edx, ss:[esp+0x13]
        push edx
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ss:[esp+0x30]
        mov byte ptr ss : [esp+0x1B], 0
        call public_62bed70
        public_627e061 : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [public_6399040]
        push 0xFFFFFFFF
        push 1
        mov ebp, eax
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax]
        push edi
        push eax
        call dword ptr ds : [edx+0xD8]
        mov esi, eax
        cmp esi, 0xFFFFFFFF
        je public_627e0ef
        public_627e087 : nop
        mov eax, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push esi
        push eax
        call dword ptr ds : [ecx+0x80]
        test eax, eax
        mov dword ptr ss : [esp+0x20], eax
        je public_627e0c4
        cmp eax, ebp
        je public_627e0c4
        lea edx, ss:[esp+0x20]
        push edx
        lea eax, ss:[esp+0x6C]
        push eax
        lea ecx, ss:[esp+0x40]
        call public_627e7d0
        mov edx, dword ptr ss : [esp+0x20]
        lea ecx, ss:[esp+0x38]
        push ecx
        push esi
        push edx
        jmp public_627e0cb
        public_627e0c4 : nop
        lea eax, ss:[esp+0x38]
        push eax
        push esi
        push ebp
        public_627e0cb : nop
        call public_627e3b0
        mov ecx, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax]
        add esp, 0xC
        push esi
        push 1
        push edi
        push eax
        call dword ptr ds : [edx+0xD8]
        mov esi, eax
        cmp esi, 0xFFFFFFFF
        jne public_627e087
        public_627e0ef : nop
        mov eax, dword ptr ss : [esp+0x24]
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, dword ptr ds : [eax+4]
        jne public_627e000
        mov ecx, dword ptr ss : [esp+0x1C]
        public_627e102 : nop
        mov eax, dword ptr ss : [esp+0x50]
        add ecx, 4
        cmp ecx, eax
        mov dword ptr ss : [esp+0x1C], ecx
        jne public_627dfe7
        xor ebx, ebx
        public_627e117 : nop
        mov eax, dword ptr ss : [esp+0x3C]
        cmp eax, dword ptr ss : [esp+0x40]
        mov ebp, eax
        je public_627e2ed
        public_627e127 : nop
        mov esi, dword ptr ss : [ebp]
        mov eax, dword ptr ds : [esi+0x74]
        dec eax
        je public_627e1f9
        dec eax
        jne public_627e2de
        fld dword ptr ds : [esi+0x2C]
        mov eax, dword ptr ds : [public_63fc018]
        cmp eax, ebx
        fstp dword ptr ss : [esp+0xB8]
        fld dword ptr ds : [esi+0x30]
        fstp dword ptr ss : [esp+0xBC]
        fld dword ptr ds : [esi+0x34]
        fstp dword ptr ss : [esp+0xC0]
        jne public_627e16c
        call public_6391cf0
        mov dword ptr ds : [public_63fc018], eax
        public_627e16c : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[esi+8]
        push edx
        lea edx, ss:[esp+0x8C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x50]
        mov eax, dword ptr ss : [esp+0x8C]
        mov ecx, dword ptr ss : [esp+0x90]
        mov edx, dword ptr ss : [esp+0x94]
        mov dword ptr ss : [esp+0x68], eax
        mov eax, dword ptr ss : [esp+0x88]
        mov dword ptr ss : [esp+0x6C], ecx
        mov ecx, dword ptr ss : [esp+0x68]
        mov dword ptr ss : [esp+0x70], edx
        mov edx, dword ptr ss : [esp+0x6C]
        mov dword ptr ss : [esp+0x74], eax
        mov eax, dword ptr ss : [esp+0x70]
        push ebx
        mov dword ptr ss : [esp+0xAC], ecx
        mov ecx, dword ptr ss : [esp+0x78]
        mov dword ptr ss : [esp+0xB0], edx
        lea edx, ss:[esp+0xBC]
        push edx
        mov dword ptr ss : [esp+0xB8], eax
        lea eax, ss:[esp+0xB0]
        mov dword ptr ss : [esp+0xBC], ecx
        mov ecx, dword ptr ds : [esi+0x54]
        push eax
        push ecx
        push ebx
        call public_6343cc0
        add esp, 0x14
        jmp public_627e2de
        public_627e1f9 : nop
        cmp dword ptr ds : [esi+0x60], ebx
        je public_627e2de
        fld dword ptr ds : [esi+0x2C]
        mov eax, dword ptr ds : [public_63fc018]
        cmp eax, ebx
        fstp dword ptr ss : [esp+0xD8]
        fld dword ptr ds : [esi+0x30]
        fstp dword ptr ss : [esp+0xDC]
        fld dword ptr ds : [esi+0x34]
        fstp dword ptr ss : [esp+0xE0]
        jne public_627e233
        call public_6391cf0
        mov dword ptr ds : [public_63fc018], eax
        public_627e233 : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[esi+8]
        push ecx
        lea ecx, ss:[esp+0x9C]
        push ecx
        push eax
        call dword ptr ds : [edx+0x50]
        mov eax, dword ptr ss : [esp+0xA0]
        mov ecx, dword ptr ss : [esp+0xA4]
        mov edx, dword ptr ss : [esp+0x9C]
        mov edi, dword ptr ds : [esi+0x60]
        mov dword ptr ss : [esp+0x7C], eax
        mov eax, dword ptr ds : [esi+0x50]
        mov dword ptr ss : [esp+0x80], ecx
        mov dword ptr ss : [esp+0x78], edx
        mov edx, dword ptr ss : [esp+0x98]
        push eax
        lea ecx, ss:[esp+0x2C]
        push ecx
        mov dword ptr ss : [esp+0x8C], edx
        mov dword ptr ss : [esp+0xD0], 0
        mov dword ptr ss : [esp+0xD4], 0
        mov dword ptr ss : [esp+0xD8], 0
        call public_6289a70
        add esp, 8
        lea edx, ss:[esp+0x28]
        push edx
        lea eax, ss:[esp+0xCC]
        push eax
        lea ecx, ss:[esp+0xE0]
        push ecx
        mov ecx, edi
        call public_6343580
        push ebx
        push ebx
        lea edx, ss:[esp+0x30]
        push edx
        lea eax, ss:[esp+0x84]
        push eax
        mov ecx, edi
        call public_6343670
        public_627e2de : nop
        mov eax, dword ptr ss : [esp+0x40]
        add ebp, 4
        cmp ebp, eax
        jne public_627e127
        public_627e2ed : nop
        mov eax, dword ptr ds : [public_63fbff0]
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, offset public_63fbfec
        call public_627f190
        mov ecx, dword ptr ds : [public_63fbffc]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x30], eax
        pop edi
        je public_627e35f
        public_627e316 : nop
        mov edx, dword ptr ds : [public_6399038]
        mov eax, dword ptr ds : [eax+0xC]
        mov ecx, dword ptr ds : [edx]
        mov edx, dword ptr ds : [ecx]
        push eax
        push ecx
        call dword ptr ds : [edx+0x44]
        test eax, eax
        je public_627e34a
        mov ecx, dword ptr ss : [esp+0x2C]
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, offset public_63fbff8
        call public_627ecf0
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x2C], eax
        jmp public_627e357
        public_627e34a : nop
        lea ecx, ss:[esp+0x2C]
        call public_627f620
        mov eax, dword ptr ss : [esp+0x2C]
        public_627e357 : nop
        cmp eax, dword ptr ds : [public_63fbffc]
        jne public_627e316
        public_627e35f : nop
        mov eax, dword ptr ss : [esp+0x38]
        push eax
        call public_6391d5a
        mov ecx, dword ptr ss : [esp+0x4C]
        push ecx
        mov dword ptr ss : [esp+0x40], ebx
        mov dword ptr ss : [esp+0x44], ebx
        mov dword ptr ss : [esp+0x48], ebx
        call public_6391d5a
        mov edx, dword ptr ss : [esp+0x60]
        push edx
        mov dword ptr ss : [esp+0x54], ebx
        mov dword ptr ss : [esp+0x58], ebx
        mov dword ptr ss : [esp+0x5C], ebx
        call public_6391d5a
        mov ecx, dword ptr ss : [esp+0xF0]
        add esp, 0xC
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0xE4
        ret 
        UNREACHABLE_TRAP(0x627dda0)
    }
}

#undef public_627de17
#undef public_627de6f
#undef public_627de7e
#undef public_627dea3
#undef public_627dec1
#undef public_627deda
#undef public_627def0
#undef public_627df51
#undef public_627df60
#undef public_627df87
#undef public_627df95
#undef public_627dfa0
#undef public_627dfbd
#undef public_627dfe7
#undef public_627e000
#undef public_627e049
#undef public_627e061
#undef public_627e087
#undef public_627e0c4
#undef public_627e0cb
#undef public_627e0ef
#undef public_627e102
#undef public_627e117
#undef public_627e127
#undef public_627e16c
#undef public_627e1f9
#undef public_627e233
#undef public_627e2de
#undef public_627e2ed
#undef public_627e316
#undef public_627e34a
#undef public_627e357
#undef public_627e35f
