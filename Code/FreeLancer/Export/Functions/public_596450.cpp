#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_421670);
CLANG_FORWARD_PROC_SYMBOL(public_421690);
CLANG_FORWARD_PROC_SYMBOL(public_421ba0);
CLANG_FORWARD_PROC_SYMBOL(public_421ca0);
CLANG_FORWARD_PROC_SYMBOL(public_421cc0);
CLANG_FORWARD_PROC_SYMBOL(public_4220a0);
CLANG_FORWARD_PROC_SYMBOL(public_422690);
CLANG_FORWARD_PROC_SYMBOL(public_425640);
CLANG_FORWARD_PROC_SYMBOL(public_42d680);
CLANG_FORWARD_PROC_SYMBOL(public_561f20);
CLANG_FORWARD_PROC_SYMBOL(public_5792b0);
CLANG_FORWARD_PROC_SYMBOL(public_595840);
CLANG_FORWARD_PROC_SYMBOL(public_595ca0);
CLANG_FORWARD_PROC_SYMBOL(public_596140);
CLANG_FORWARD_PROC_SYMBOL(public_5962c0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_596490 _public_596490
#define public_5964b4 _public_5964b4
#define public_5965eb _public_5965eb
#define public_5965f4 _public_5965f4
#define public_59682b _public_59682b
#define public_59690b _public_59690b
#define public_596914 _public_596914
#define public_596ad3 _public_596ad3
#define public_596b13 _public_596b13
#define public_596b1f _public_596b1f
#define public_596b6c _public_596b6c
#define public_596b85 _public_596b85

PROC_DECLARE(0x596450, internal_596450, public_596450);
extern "C" NAKED register_t __cdecl internal_596450()
{
    __asm
    {
        sub esp, 0x20
        push ebx
        push esi
        push edi
        push 0x16
        mov ebx, ecx
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_596b85
        mov al, byte ptr ds : [ebx+0x32D]
        test al, al
        lea esi, ds:[ebx+0x410]
        je public_596490
        mov eax, dword ptr ds : [ebx+0x32E]
        mov dword ptr ds : [ebx+0x40C], eax
        mov dword ptr ds : [esi], eax
        mov dword ptr ds : [ebx+0x414], eax
        jmp public_5964b4
        public_596490 : nop
        mov eax, dword ptr ds : [public_679bb0]
        mov dword ptr ds : [ebx+0x40C], eax
        mov ecx, dword ptr ds : [public_679bb0]
        mov dword ptr ds : [esi], ecx
        mov edx, dword ptr ds : [public_679bb0]
        mov dword ptr ds : [ebx+0x414], edx
        mov eax, dword ptr ds : [public_679bb0]
        public_5964b4 : nop
        push ebp
        lea ecx, ds:[ebx+0x3C]
        push ecx
        push 0
        mov dword ptr ds : [ebx+0x418], eax
        call public_422690
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        add esp, 8
        push 0
        push 7
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0xE
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 1
        push 0x16
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0x89
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 5
        push 0x13
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 6
        push 0x14
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 1
        push 0x1B
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov al, byte ptr ds : [ebx+0x42C]
        test al, al
        push 0
        lea edx, ds:[ebx+0x350]
        push 1
        mov ecx, ebx
        push edx
        je public_59682b
        call public_5962c0
        push 1
        push 1
        lea eax, ds:[ebx+0x33C]
        push eax
        mov ecx, ebx
        call public_5962c0
        mov al, byte ptr ds : [ebx+0x39C]
        test al, al
        je public_5965eb
        mov al, byte ptr ds : [ebx+0x32C]
        test al, al
        je public_5965eb
        mov cl, byte ptr ds : [ebx+0x418]
        mov dl, byte ptr ds : [ebx+0x419]
        mov al, byte ptr ds : [ebx+0x41A]
        mov byte ptr ss : [esp+0x10], cl
        mov cl, byte ptr ds : [ebx+0x41B]
        mov byte ptr ss : [esp+0x12], al
        mov byte ptr ss : [esp+0x11], dl
        mov byte ptr ss : [esp+0x13], cl
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        lea eax, ss:[esp+0x14]
        push eax
        call public_561f20
        lea ecx, ss:[esp+0x18]
        push ecx
        call public_421ba0
        add esp, 0xC
        jmp public_5965f4
        public_5965eb : nop
        push esi
        call public_421ba0
        add esp, 4
        public_5965f4 : nop
        lea esi, ds:[ebx+0x38C]
        mov ecx, 5
        lea edi, ss:[esp+0x1C]
        rep movsd
        fld dword ptr ss : [esp+0x1C]
        fadd dword ptr ds : [public_5d3e94]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x24]
        fsub dword ptr ds : [public_5d3e94]
        fstp dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [public_67d9ec]
        push 0
        call public_425640
        push eax
        call public_4220a0
        push 8
        call public_421670
        push 0
        push 0x3F800000
        call public_421ca0
        mov esi, dword ptr ss : [esp+0x30]
        mov ebp, dword ptr ss : [esp+0x24]
        push 0
        push esi
        push ebp
        call public_421cc0
        push 0x3F800000
        push 0x3F800000
        call public_421ca0
        mov edx, dword ptr ss : [esp+0x34]
        push 0
        push esi
        push edx
        call public_421cc0
        push 0x3F800000
        push 0
        call public_421ca0
        mov edi, dword ptr ss : [esp+0x60]
        mov eax, dword ptr ss : [esp+0x48]
        push 0
        push edi
        push eax
        call public_421cc0
        add esp, 0x44
        push 0
        push 0
        call public_421ca0
        push 0
        push edi
        push ebp
        call public_421cc0
        add esp, 0x14
        call public_421690
        mov ecx, dword ptr ds : [public_67d9e8]
        push 0
        call public_425640
        push eax
        call public_4220a0
        push 8
        call public_421670
        push 0x3F800000
        push 0x3F800000
        call public_421ca0
        push 0
        push esi
        push ebp
        call public_421cc0
        push 0x3F800000
        push 0x3F800000
        call public_421ca0
        mov ecx, dword ptr ss : [esp+0x40]
        push 0
        push esi
        push ecx
        call public_421cc0
        push 0x3F400000
        push 0x3F800000
        call public_421ca0
        mov edx, dword ptr ss : [esp+0x54]
        push 0
        push edi
        push edx
        call public_421cc0
        add esp, 0x44
        push 0x3F400000
        push 0x3F800000
        call public_421ca0
        push 0
        push edi
        push ebp
        call public_421cc0
        add esp, 0x14
        call public_421690
        mov ecx, dword ptr ds : [public_67d9e8]
        push 0
        call public_425640
        push eax
        call public_4220a0
        push 8
        call public_421670
        push 0x3E800000
        push 0
        call public_421ca0
        mov ebp, dword ptr ss : [esp+0x20]
        push 0
        push esi
        push ebp
        call public_421cc0
        push 0x3E800000
        push 0x3F800000
        call public_421ca0
        push 0
        push esi
        mov esi, dword ptr ss : [esp+0x50]
        push esi
        call public_421cc0
        push 0
        push 0x3F800000
        call public_421ca0
        push 0
        push edi
        push esi
        call public_421cc0
        add esp, 0x44
        push 0
        push 0
        call public_421ca0
        push 0
        push edi
        push ebp
        call public_421cc0
        call public_421690
        lea eax, ds:[ebx+0x40C]
        push eax
        call public_421ba0
        push 7
        call public_421670
        mov eax, dword ptr ds : [ebx+0x37C]
        mov ecx, dword ptr ds : [ebx+0x364]
        push 0
        push eax
        push ecx
        call public_421cc0
        mov edx, dword ptr ds : [ebx+0x37C]
        mov eax, dword ptr ds : [ebx+0x380]
        push 0
        push edx
        push eax
        call public_421cc0
        mov ecx, dword ptr ds : [ebx+0x384]
        mov edx, dword ptr ds : [ebx+0x380]
        push 0
        push ecx
        push edx
        call public_421cc0
        mov eax, dword ptr ds : [ebx+0x384]
        mov ecx, dword ptr ds : [ebx+0x364]
        add esp, 0x40
        push 0
        push eax
        push ecx
        call public_421cc0
        add esp, 0xC
        jmp public_596ad3
        public_59682b : nop
        call public_596140
        push 1
        push 1
        lea eax, ds:[ebx+0x33C]
        push eax
        mov ecx, ebx
        call public_596140
        lea eax, ds:[ebx+0x40C]
        push eax
        call public_421ba0
        push 7
        call public_421670
        mov ecx, dword ptr ds : [ebx+0x368]
        mov edx, dword ptr ds : [ebx+0x378]
        push 0
        push ecx
        push edx
        call public_421cc0
        mov eax, dword ptr ds : [ebx+0x368]
        mov ecx, dword ptr ds : [ebx+0x380]
        push 0
        push eax
        push ecx
        call public_421cc0
        mov edx, dword ptr ds : [ebx+0x384]
        mov eax, dword ptr ds : [ebx+0x380]
        push 0
        push edx
        push eax
        call public_421cc0
        mov ecx, dword ptr ds : [ebx+0x384]
        mov edx, dword ptr ds : [ebx+0x378]
        push 0
        push ecx
        push edx
        call public_421cc0
        add esp, 0x38
        call public_421690
        mov al, byte ptr ds : [ebx+0x39C]
        test al, al
        je public_59690b
        mov al, byte ptr ds : [ebx+0x32C]
        test al, al
        je public_59690b
        mov al, byte ptr ds : [ebx+0x418]
        mov cl, byte ptr ds : [ebx+0x419]
        mov dl, byte ptr ds : [ebx+0x41A]
        mov byte ptr ss : [esp+0x10], al
        mov al, byte ptr ds : [ebx+0x41B]
        mov byte ptr ss : [esp+0x12], dl
        mov byte ptr ss : [esp+0x11], cl
        mov byte ptr ss : [esp+0x13], al
        mov ecx, dword ptr ss : [esp+0x10]
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        call public_561f20
        lea eax, ss:[esp+0x1C]
        push eax
        call public_421ba0
        add esp, 0xC
        jmp public_596914
        public_59690b : nop
        push esi
        call public_421ba0
        add esp, 4
        public_596914 : nop
        lea esi, ds:[ebx+0x38C]
        mov ecx, 5
        lea edi, ss:[esp+0x1C]
        rep movsd
        fld dword ptr ss : [esp+0x20]
        fsub dword ptr ds : [public_5d3e94]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x28]
        fadd dword ptr ds : [public_5d3e94]
        fstp dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [public_67d9ec]
        push 0
        call public_425640
        push eax
        call public_4220a0
        push 8
        call public_421670
        push 0
        push 0
        call public_421ca0
        mov ebp, dword ptr ss : [esp+0x24]
        mov esi, dword ptr ss : [esp+0x2C]
        push 0
        push ebp
        push esi
        call public_421cc0
        push 0
        push 0x3F800000
        call public_421ca0
        mov edi, dword ptr ss : [esp+0x48]
        push 0
        push ebp
        push edi
        call public_421cc0
        push 0x3F800000
        push 0x3F800000
        call public_421ca0
        mov ecx, dword ptr ss : [esp+0x48]
        push 0
        push ecx
        push edi
        call public_421cc0
        add esp, 0x44
        push 0x3F800000
        push 0
        call public_421ca0
        mov edx, dword ptr ss : [esp+0x18]
        push 0
        push edx
        push esi
        call public_421cc0
        add esp, 0x14
        call public_421690
        mov ecx, dword ptr ds : [public_67d9e8]
        push 0
        call public_425640
        push eax
        call public_4220a0
        push 8
        call public_421670
        push 0x3F800000
        push 0x3F800000
        call public_421ca0
        push 0
        push ebp
        push esi
        call public_421cc0
        push 0x3F800000
        push 0x3F800000
        call public_421ca0
        push 0
        push ebp
        push edi
        call public_421cc0
        push 0x3F400000
        push 0x3F800000
        call public_421ca0
        mov ebp, dword ptr ss : [esp+0x58]
        push 0
        push ebp
        push edi
        call public_421cc0
        add esp, 0x44
        push 0x3F400000
        push 0x3F800000
        call public_421ca0
        push 0
        push ebp
        push esi
        call public_421cc0
        add esp, 0x14
        call public_421690
        mov ecx, dword ptr ds : [public_67d9e8]
        push 0
        call public_425640
        push eax
        call public_4220a0
        push 8
        call public_421670
        push 0x3E800000
        push 0
        call public_421ca0
        mov ebp, dword ptr ss : [esp+0x38]
        push 0
        push ebp
        push esi
        call public_421cc0
        push 0x3E800000
        push 0x3F800000
        call public_421ca0
        push 0
        push ebp
        push edi
        call public_421cc0
        push 0
        push 0x3F800000
        call public_421ca0
        mov ebp, dword ptr ss : [esp+0x48]
        push 0
        push ebp
        push edi
        call public_421cc0
        add esp, 0x44
        push 0
        push 0
        call public_421ca0
        push 0
        push ebp
        push esi
        call public_421cc0
        add esp, 0x14
        public_596ad3 : nop
        call public_421690
        mov ecx, dword ptr ds : [ebx+0x3B8]
        cmp ecx, 0xFFFFFFFF
        pop ebp
        je public_596b85
        fld dword ptr ds : [ebx+0x3BC]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 5
        jp public_596b6c
        mov eax, ecx
        sub eax, 0
        je public_596b13
        dec eax
        jne public_596b6c
        fld dword ptr ds : [ebx+0x3D0]
        fadd dword ptr ds : [ebx+0x3C8]
        jmp public_596b1f
        public_596b13 : nop
        fld dword ptr ds : [ebx+0x3C8]
        fsub dword ptr ds : [ebx+0x3D0]
        public_596b1f : nop
        mov ecx, ebx
        fstp dword ptr ds : [ebx+0x3C8]
        call public_595ca0
        call public_595840
        mov ecx, dword ptr ds : [ebx+4]
        test ecx, ecx
        je public_596b6c
        mov eax, dword ptr ds : [ecx]
        push 0
        push ebx
        push 0xF005
        call dword ptr ds : [eax+0x5C]
        mov ecx, dword ptr ds : [ebx+4]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+8]
        mov esi, eax
        test esi, esi
        je public_596b6c
        fld dword ptr ds : [ebx+0x3C8]
        mov edi, dword ptr ds : [esi]
        call public_5b7ec0
        push eax
        push ebx
        mov ecx, esi
        push 0x3E
        call dword ptr ds : [edi+0xA8]
        public_596b6c : nop
        fld dword ptr ds : [ebx+0x3BC]
        fstp qword ptr ss : [esp+0x10]
        call public_42d680
        fsubr qword ptr ss : [esp+0x10]
        fstp dword ptr ds : [ebx+0x3BC]
        public_596b85 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x596450)
    }
}

#undef public_596490
#undef public_5964b4
#undef public_5965eb
#undef public_5965f4
#undef public_59682b
#undef public_59690b
#undef public_596914
#undef public_596ad3
#undef public_596b13
#undef public_596b1f
#undef public_596b6c
#undef public_596b85
