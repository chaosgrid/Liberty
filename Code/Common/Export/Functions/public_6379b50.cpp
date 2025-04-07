#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628bed0);
CLANG_FORWARD_PROC_SYMBOL(public_6356a40);
CLANG_FORWARD_PROC_SYMBOL(public_6356a70);
CLANG_FORWARD_PROC_SYMBOL(public_636da10);
CLANG_FORWARD_PROC_SYMBOL(public_6378a40);
CLANG_FORWARD_PROC_SYMBOL(public_6378fd0);
CLANG_FORWARD_PROC_SYMBOL(public_6379000);
CLANG_FORWARD_PROC_SYMBOL(public_6379100);
CLANG_FORWARD_PROC_SYMBOL(public_6379460);
CLANG_FORWARD_PROC_SYMBOL(public_63799b0);
CLANG_FORWARD_PROC_SYMBOL(public_6379b50);
CLANG_FORWARD_PROC_SYMBOL(public_637a090);
CLANG_FORWARD_PROC_SYMBOL(public_637a0e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_6398991);

#define public_6379ba9 _public_6379ba9
#define public_6379baf _public_6379baf
#define public_6379bcc _public_6379bcc
#define public_6379beb _public_6379beb
#define public_6379bf1 _public_6379bf1
#define public_6379c20 _public_6379c20
#define public_6379c24 _public_6379c24
#define public_6379ceb _public_6379ceb
#define public_6379d13 _public_6379d13
#define public_6379d15 _public_6379d15
#define public_6379d2d _public_6379d2d
#define public_6379e07 _public_6379e07
#define public_6379e1b _public_6379e1b
#define public_6379e3b _public_6379e3b
#define public_6379e4f _public_6379e4f
#define public_6379e60 _public_6379e60
#define public_6379e87 _public_6379e87
#define public_6379eae _public_6379eae
#define public_6379eb4 _public_6379eb4
#define public_6379edc _public_6379edc
#define public_6379ede _public_6379ede
#define public_6379ef6 _public_6379ef6
#define public_6379f2c _public_6379f2c
#define public_6379f30 _public_6379f30
#define public_6379f8a _public_6379f8a
#define public_6379fb3 _public_6379fb3
#define public_6379fd4 _public_6379fd4

PROC_DECLARE(0x6379b50, internal_6379b50, public_6379b50);
extern "C" NAKED register_t __cdecl internal_6379b50()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6398991 @0x6379b52*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6398991
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x58
        push ebx
        push ebp
        push esi
        mov ebx, ecx
        push edi
        mov edi, dword ptr ds : [ebx]
        mov eax, dword ptr ds : [edi]
        sub eax, 2
        lea esi, ds:[eax+eax*2]
        xor ebp, ebp
        push 0x10
        mov dword ptr ss : [esp+0x2C], ebp
        shl esi, 1
        call public_6391d9c
        add esp, 4
        mov dword ptr ss : [esp+0x34], eax
        cmp eax, ebp
        mov dword ptr ss : [esp+0x70], ebp
        je public_6379ba9
        push ebp
        push 8
        push esi
        mov ecx, eax
        call public_6356a40
        mov esi, eax
        mov dword ptr ss : [esp+0x10], esi
        jmp public_6379baf
        public_6379ba9 : nop
        mov dword ptr ss : [esp+0x10], ebp
        mov esi, ebp
        public_6379baf : nop
        mov eax, dword ptr ds : [edi+0x10]
        mov edi, dword ptr ds : [edi+0x14]
        dec eax
        mov dword ptr ss : [esp+0x70], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x2C], eax
        mov dword ptr ss : [esp+0x14], edi
        js public_6379e3b
        public_6379bcc : nop
        push 0x20
        call public_6391d9c
        add esp, 4
        cmp eax, ebp
        je public_6379beb
        push edi
        push ebx
        mov ecx, eax
        call public_6378fd0
        mov esi, eax
        mov dword ptr ss : [esp+0x24], esi
        jmp public_6379bf1
        public_6379beb : nop
        mov dword ptr ss : [esp+0x24], ebp
        mov esi, ebp
        public_6379bf1 : nop
        mov ecx, esi
        call public_6379100
        cmp eax, ebp
        jne public_6379e60
        mov ecx, esi
        call public_6379460
        cmp eax, ebp
        jne public_6379e87
        mov eax, dword ptr ds : [esi+0x10]
        cmp eax, ebp
        mov dword ptr ss : [esp+0x20], eax
        je public_6379e07
        jmp public_6379c24
        public_6379c20 : nop
        mov eax, dword ptr ss : [esp+0x20]
        public_6379c24 : nop
        mov ecx, dword ptr ds : [eax+0x10]
        mov edi, dword ptr ds : [ebx+0x38]
        lea ecx, ds:[ecx+ecx*2]
        lea ebp, ds:[edi+ecx*8]
        mov ecx, dword ptr ds : [eax+0xC]
        mov eax, dword ptr ds : [eax+8]
        lea edx, ds:[ecx+ecx*2]
        fld dword ptr ds : [edi+edx*8]
        lea esi, ds:[edi+edx*8]
        fsub dword ptr ss : [ebp]
        lea eax, ds:[eax+eax*2]
        fld dword ptr ds : [esi+4]
        lea edi, ds:[edi+eax*8]
        fsub dword ptr ss : [ebp+4]
        mov dword ptr ss : [esp+0x18], esi
        mov dword ptr ss : [esp+0x1C], edi
        fstp dword ptr ss : [esp+0x30]
        fld dword ptr ds : [esi+8]
        mov ecx, dword ptr ss : [esp+0x30]
        fsub dword ptr ss : [ebp+8]
        mov dword ptr ss : [esp+0x4C], ecx
        fstp dword ptr ss : [esp+0x34]
        mov edx, dword ptr ss : [esp+0x34]
        mov dword ptr ss : [esp+0x50], edx
        fstp dword ptr ss : [esp+0x48]
        lea edx, ss:[esp+0x38]
        fld dword ptr ds : [edi]
        push edx
        fsub dword ptr ss : [ebp]
        fld dword ptr ds : [edi+4]
        fsub dword ptr ss : [ebp+4]
        fstp dword ptr ss : [esp+0x38]
        mov eax, dword ptr ss : [esp+0x38]
        fld dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x40], eax
        fsub dword ptr ss : [ebp+8]
        lea eax, ss:[esp+0x4C]
        push eax
        fstp dword ptr ss : [esp+0x38]
        mov ecx, dword ptr ss : [esp+0x38]
        mov dword ptr ss : [esp+0x48], ecx
        fstp dword ptr ss : [esp+0x40]
        lea ecx, ss:[esp+0x60]
        call public_628bed0
        fld dword ptr ss : [esp+0x5C]
        mov eax, dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [eax+4]
        fld dword ptr ss : [esp+0x60]
        fmul dword ptr ds : [eax+8]
        faddp 
        fld dword ptr ss : [esp+0x58]
        fmul dword ptr ds : [eax]
        faddp 
        fcomp dword ptr ds : [public_63a53d4]
        fnstsw ax
        test ah, 1
        je public_6379ceb
        mov dword ptr ss : [esp+0x1C], esi
        mov dword ptr ss : [esp+0x18], edi
        mov esi, edi
        public_6379ceb : nop
        push 0x9C
        call public_6391d9c
        add esp, 4
        mov dword ptr ss : [esp+0x34], eax
        test eax, eax
        mov dword ptr ss : [esp+0x70], 1
        je public_6379d13
        mov ecx, eax
        call public_637a0e0
        mov edi, eax
        jmp public_6379d15
        public_6379d13 : nop
        xor edi, edi
        public_6379d15 : nop
        mov ecx, dword ptr ds : [ebx+0x30]
        mov dword ptr ds : [edi+4], ecx
        mov eax, dword ptr ds : [ebx+0x30]
        test eax, eax
        mov dword ptr ss : [esp+0x70], 0xFFFFFFFF
        je public_6379d2d
        mov dword ptr ds : [eax+8], edi
        public_6379d2d : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edi+8], 0
        mov eax, dword ptr ds : [ebx+0x34]
        inc eax
        mov dword ptr ds : [ebx+0x30], edi
        mov dword ptr ds : [ebx+0x34], eax
        mov byte ptr ds : [edi+0x14], 1
        call public_636da10
        lea edx, ds:[eax+eax*2]
        mov eax, dword ptr ds : [ebx+0x40]
        lea ecx, ds:[eax+edx*4]
        mov edx, dword ptr ss : [esp+0x28]
        lea eax, ds:[edi+0x1C]
        mov dword ptr ds : [edi+0x18], ecx
        add edx, 3
        push eax
        mov byte ptr ds : [edi+0x15], 0
        lea ecx, ds:[eax+0x24]
        mov dword ptr ss : [esp+0x2C], edx
        lea edx, ds:[eax+0x48]
        push esi
        mov dword ptr ds : [eax], ebp
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], edx
        mov dword ptr ds : [eax+0x10], 0
        mov eax, dword ptr ss : [esp+0x18]
        push ebp
        push eax
        mov dword ptr ss : [esp+0x44], ecx
        call public_63799b0
        mov eax, dword ptr ss : [esp+0x44]
        mov edx, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [eax], esi
        lea ecx, ds:[eax-0x24]
        push eax
        lea esi, ds:[eax+0x24]
        mov dword ptr ds : [eax+0xC], ecx
        mov ecx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [eax+8], esi
        mov dword ptr ds : [eax+0x10], 0
        mov eax, dword ptr ss : [esp+0x2C]
        push edx
        push eax
        push ecx
        call public_63799b0
        mov eax, dword ptr ss : [esp+0x3C]
        push esi
        lea edx, ds:[esi-0x48]
        push ebp
        mov dword ptr ds : [esi+8], edx
        mov edx, dword ptr ss : [esp+0x38]
        push eax
        lea ecx, ds:[esi-0x24]
        push edx
        mov dword ptr ds : [esi], eax
        mov dword ptr ds : [esi+4], edi
        mov dword ptr ds : [esi+0xC], ecx
        mov dword ptr ds : [esi+0x10], 0
        call public_63799b0
        mov eax, dword ptr ss : [esp+0x50]
        mov eax, dword ptr ds : [eax]
        add esp, 0x30
        test eax, eax
        mov dword ptr ss : [esp+0x20], eax
        jne public_6379c20
        mov esi, dword ptr ss : [esp+0x24]
        xor ebp, ebp
        public_6379e07 : nop
        cmp esi, ebp
        je public_6379e1b
        mov ecx, esi
        call public_6379000
        push esi
        call public_6391d5a
        add esp, 4
        public_6379e1b : nop
        mov eax, dword ptr ss : [esp+0x2C]
        mov edi, dword ptr ss : [esp+0x14]
        dec eax
        add edi, 0x20
        cmp eax, ebp
        mov dword ptr ss : [esp+0x2C], eax
        mov dword ptr ss : [esp+0x14], edi
        jge public_6379bcc
        mov esi, dword ptr ss : [esp+0x10]
        public_6379e3b : nop
        cmp esi, ebp
        je public_6379e4f
        mov ecx, esi
        call public_6356a70
        push esi
        call public_6391d5a
        add esp, 4
        public_6379e4f : nop
        mov esi, dword ptr ds : [ebx+0x30]
        cmp esi, ebp
        mov dword ptr ss : [esp+0x20], esi
        je public_6379fd4
        jmp public_6379eb4
        public_6379e60 : nop
        push eax
/*FIXUP push offset public_63f35a0 @0x6379e61*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f35a0
        call dword ptr ds : [public_6399284]
        add esp, 8
        pop edi
        pop esi
        pop ebp
        mov eax, offset public_63f3588
        pop ebx
        mov ecx, dword ptr ss : [esp+0x58]
        mov dword ptr fs : [0], ecx
        add esp, 0x64
        ret 
        public_6379e87 : nop
        push eax
/*FIXUP push offset public_63f3554 @0x6379e88*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f3554
        call dword ptr ds : [public_6399284]
        add esp, 8
        pop edi
        pop esi
        pop ebp
        mov eax, offset public_63f353c
        pop ebx
        mov ecx, dword ptr ss : [esp+0x58]
        mov dword ptr fs : [0], ecx
        add esp, 0x64
        ret 
        public_6379eae : nop
        mov esi, dword ptr ss : [esp+0x20]
        xor ebp, ebp
        public_6379eb4 : nop
        push 0x9C
        call public_6391d9c
        add esp, 4
        mov dword ptr ss : [esp+0x34], eax
        cmp eax, ebp
        mov dword ptr ss : [esp+0x70], 2
        je public_6379edc
        mov ecx, eax
        call public_637a0e0
        mov edi, eax
        jmp public_6379ede
        public_6379edc : nop
        xor edi, edi
        public_6379ede : nop
        mov ecx, dword ptr ds : [ebx+0x30]
        mov dword ptr ds : [edi+4], ecx
        mov eax, dword ptr ds : [ebx+0x30]
        cmp eax, ebp
        mov dword ptr ss : [esp+0x70], 0xFFFFFFFF
        je public_6379ef6
        mov dword ptr ds : [eax+8], edi
        public_6379ef6 : nop
        mov dword ptr ds : [edi+8], ebp
        inc dword ptr ds : [ebx+0x34]
        mov dword ptr ds : [ebx+0x30], edi
        mov eax, esi
        mov dword ptr ds : [edi+0x18], ebp
        lea edx, ds:[esi+0x78]
        sub eax, edi
        mov byte ptr ds : [edi+0x14], 1
        mov byte ptr ds : [edi+0x15], 1
        mov dword ptr ds : [edi+0xC], esi
        mov dword ptr ds : [esi+0xC], edi
        mov dword ptr ss : [esp+0x14], 3
        mov dword ptr ss : [esp+0x24], edx
        lea ebp, ds:[edi+0x6C]
        mov dword ptr ss : [esp+0x34], eax
        jmp public_6379f30
        public_6379f2c : nop
        mov eax, dword ptr ss : [esp+0x34]
        public_6379f30 : nop
        mov eax, dword ptr ds : [eax+ebp]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [esp+0x14]
        lea eax, ds:[edx+1]
        cdq 
        mov dword ptr ss : [ebp-8], ecx
        lea esi, ss:[ebp-8]
        mov ecx, 3
        idiv ecx
        mov dword ptr ss : [ebp-4], edi
        lea edx, ds:[edx+edx*8]
        lea eax, ds:[edi+edx*4+0x1C]
        mov dword ptr ss : [ebp], eax
        mov eax, dword ptr ss : [esp+0x14]
        cdq 
        idiv ecx
        mov ecx, dword ptr ss : [esp+0x24]
        lea edx, ds:[edx+edx*8]
        lea eax, ds:[edi+edx*4+0x1C]
        mov dword ptr ss : [ebp+4], eax
        mov edx, dword ptr ds : [ecx]
        mov ecx, esi
        mov dword ptr ss : [ebp+8], edx
        call public_6378a40
        mov ecx, dword ptr ds : [eax+0x14]
        call public_6378a40
        test eax, eax
        je public_6379f8a
        mov dword ptr ss : [ebp+0xC], eax
        mov dword ptr ds : [eax+0x14], esi
        public_6379f8a : nop
        mov ecx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+0x10], esi
        mov eax, dword ptr ss : [esp+0x14]
        dec eax
        sub ecx, 0x24
        sub ebp, 0x24
        mov dword ptr ss : [esp+0x14], eax
        dec eax
        test eax, eax
        mov dword ptr ss : [esp+0x24], ecx
        jge public_6379f2c
        add edi, 0x64
        mov esi, 3
        public_6379fb3 : nop
        push edi
        mov ecx, ebx
        call public_637a090
        sub edi, 0x24
        dec esi
        jne public_6379fb3
        mov ecx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        mov dword ptr ss : [esp+0x20], eax
        jne public_6379eae
        public_6379fd4 : nop
        mov ecx, dword ptr ss : [esp+0x68]
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x64
        ret 
        UNREACHABLE_TRAP(0x6379b50)
    }
}

#undef public_6379ba9
#undef public_6379baf
#undef public_6379bcc
#undef public_6379beb
#undef public_6379bf1
#undef public_6379c20
#undef public_6379c24
#undef public_6379ceb
#undef public_6379d13
#undef public_6379d15
#undef public_6379d2d
#undef public_6379e07
#undef public_6379e1b
#undef public_6379e3b
#undef public_6379e4f
#undef public_6379e60
#undef public_6379e87
#undef public_6379eae
#undef public_6379eb4
#undef public_6379edc
#undef public_6379ede
#undef public_6379ef6
#undef public_6379f2c
#undef public_6379f30
#undef public_6379f8a
#undef public_6379fb3
#undef public_6379fd4
