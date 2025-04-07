#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4215b0);
CLANG_FORWARD_PROC_SYMBOL(public_422b80);
CLANG_FORWARD_PROC_SYMBOL(public_425480);
CLANG_FORWARD_PROC_SYMBOL(public_533100);
CLANG_FORWARD_PROC_SYMBOL(public_540c30);
CLANG_FORWARD_PROC_SYMBOL(public_5416c0);
CLANG_FORWARD_PROC_SYMBOL(public_542550);
CLANG_FORWARD_PROC_SYMBOL(public_548eb0);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5c0c6e);

#define public_53cde1 _public_53cde1
#define public_53cde7 _public_53cde7
#define public_53ce26 _public_53ce26
#define public_53ce6d _public_53ce6d
#define public_53ce6f _public_53ce6f
#define public_53cee0 _public_53cee0
#define public_53cf67 _public_53cf67
#define public_53cf80 _public_53cf80
#define public_53cf82 _public_53cf82
#define public_53cfb7 _public_53cfb7
#define public_53d05d _public_53d05d

PROC_DECLARE(0x53cd70, internal_53cd70, public_53cd70);
extern "C" NAKED register_t __cdecl internal_53cd70()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5c0c6e @0x53cd78*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c0c6e
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x94
        push ebx
        push edi
        call dword ptr ds : [public_5c6a28]
        test al, al
        je public_53d05d
        push ebp
        push esi
        push 0xC0
        call public_5b7e84
        mov ebp, eax
        add esp, 4
        mov dword ptr ss : [esp+0x10], ebp
        xor edi, edi
        cmp ebp, edi
        mov dword ptr ss : [esp+0xAC], edi
        je public_53cde1
        push 6
        mov ecx, ebp
        call public_542550
        mov dword ptr ss : [ebp], offset public_5df01c
        mov dword ptr ss : [ebp+4], offset public_5def9c
        mov dword ptr ss : [ebp+0xC], offset public_5def94
        mov dword ptr ss : [esp+0x10], ebp
        jmp public_53cde7
        public_53cde1 : nop
        mov dword ptr ss : [esp+0x10], edi
        mov ebp, edi
        public_53cde7 : nop
        mov dword ptr ss : [esp+0xAC], 0xFFFFFFFF
        call dword ptr ds : [public_5c60d0]
        test al, al
        mov ebx, dword ptr ss : [esp+0xB8]
        je public_53ce26
        mov eax, dword ptr ss : [ebp]
        push ebx
        mov ecx, ebp
        call dword ptr ds : [eax+0x16C]
        test al, al
        jne public_53cf67
        mov edx, dword ptr ss : [ebp+0xC]
        lea ecx, ss:[ebp+0xC]
        push 1
        call dword ptr ds : [edx]
        jmp public_53cfb7
        public_53ce26 : nop
        mov eax, dword ptr ds : [ebx+4]
        push eax
        call dword ptr ds : [public_5c603c]
        mov esi, eax
        mov edx, dword ptr ds : [esi]
        add esp, 4
        mov ecx, esi
        call dword ptr ds : [edx+0xC]
        mov eax, dword ptr ss : [ebp]
        push esi
        mov ecx, ebp
        call dword ptr ds : [eax+0x168]
        mov ecx, esi
        call dword ptr ds : [public_5c65c8]
        lea eax, ss:[ebp+0xC]
        cmp eax, edi
        je public_53ce6d
        mov eax, dword ptr ds : [eax+4]
        cmp eax, edi
        je public_53ce6d
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x17
        cmp cl, 0x17
        jne public_53ce6d
        mov ebp, eax
        jmp public_53ce6f
        public_53ce6d : nop
        xor ebp, ebp
        public_53ce6f : nop
        push edi
        push edi
        push edi
        lea ecx, ss:[esp+0x6C]
        mov dword ptr ss : [esp+0x38], 0xBF800000
        call public_422b80
        push edi
        push edi
        push edi
        lea ecx, ss:[esp+0x78]
        call public_422b80
        lea ecx, ss:[esp+0x3C]
        mov dword ptr ss : [esp+0x78], edi
        call public_4215b0
        mov eax, dword ptr ds : [public_613ed0]
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+0x44]
        mov dword ptr ss : [esp+0x24], eax
        lea eax, ds:[ebx+0x10]
        mov dword ptr ss : [esp+0x20], edx
        mov edx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x28], ecx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x30], edx
        mov edx, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [public_6789f8]
        cmp eax, edi
        mov dword ptr ss : [esp+0x7C], edi
        mov dword ptr ss : [esp+0x34], ecx
        mov dword ptr ss : [esp+0x38], edx
        jne public_53cee0
        call public_5b73e0
        mov dword ptr ds : [public_6789f8], eax
        public_53cee0 : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[ebx+0x1C]
        push ecx
        lea ecx, ss:[esp+0x84]
        push ecx
        push eax
        call dword ptr ds : [edx+0x54]
        mov ecx, 9
        lea esi, ss:[esp+0x80]
        lea edi, ss:[esp+0x3C]
        rep movsd
        lea esi, ds:[ebx+0x2C]
        mov edx, esi
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x60], eax
        mov dword ptr ss : [esp+0x64], ecx
        lea edi, ds:[ebx+0x38]
        mov eax, edi
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x68], edx
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x6C], ecx
        mov ecx, dword ptr ds : [ebx+8]
        mov dword ptr ss : [esp+0x74], eax
        mov dword ptr ss : [esp+0x7C], ecx
        lea eax, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x70], edx
        mov edx, dword ptr ss : [ebp]
        push eax
        mov ecx, ebp
        call dword ptr ds : [edx+0xA0]
        push edi
        lea eax, ds:[ebx+0x1C]
        push eax
        push esi
        lea eax, ds:[ebx+0x10]
        push eax
        push ebp
        call dword ptr ds : [public_5c6a30]
        mov ebp, dword ptr ss : [esp+0x24]
        add esp, 0x14
        xor edi, edi
        public_53cf67 : nop
        lea eax, ss:[ebp+0xC]
        cmp eax, edi
        je public_53cf80
        mov esi, dword ptr ds : [eax+4]
        cmp esi, edi
        je public_53cf80
        mov ecx, dword ptr ds : [esi+0x4C]
        and ecx, 0x17
        cmp cl, 0x17
        je public_53cf82
        public_53cf80 : nop
        xor esi, esi
        public_53cf82 : nop
        mov ecx, esi
        call dword ptr ds : [public_5c6590]
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        push 1
        mov ecx, eax
        call dword ptr ds : [edx+0x20]
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_425480
        mov edx, dword ptr ss : [ebp]
        add esp, 4
        mov ecx, ebp
        call dword ptr ds : [edx+0x170]
        push edi
        push ebp
        call public_540c30
        add esp, 8
        public_53cfb7 : nop
        mov eax, dword ptr ds : [ebx+8]
        cmp eax, edi
        pop esi
        pop ebp
        je public_53d05d
        push eax
        call public_548eb0
        add esp, 4
        test al, al
        jne public_53d05d
        mov eax, dword ptr ds : [ebx+8]
        push edi
        push eax
        call public_5416c0
        add esp, 8
        cmp eax, edi
        je public_53d05d
        xor ecx, ecx
        mov cx, word ptr ds : [ebx+0xC]
        push ecx
        mov ecx, eax
        call public_533100
        cmp eax, edi
        je public_53d05d
        cmp dword ptr ds : [eax+4], edi
        je public_53d05d
        lea edx, ds:[ebx+0x2C]
        mov ecx, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0xC], ecx
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ds : [public_5dd55c]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x10], ecx
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [public_5dd55c]
        mov dword ptr ss : [esp+0x14], edx
        fld dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [eax]
        fmul dword ptr ds : [public_5dd55c]
        lea ecx, ss:[esp+0xC]
        push ecx
        mov ecx, eax
        fstp dword ptr ss : [esp+0x18]
        fxch 
        fadd dword ptr ds : [ebx+0x10]
        fstp dword ptr ss : [esp+0x10]
        fadd dword ptr ds : [ebx+0x14]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x18]
        fadd dword ptr ds : [ebx+0x18]
        fstp dword ptr ss : [esp+0x18]
        call dword ptr ds : [edx+0x14]
        public_53d05d : nop
        mov ecx, dword ptr ss : [esp+0x9C]
        pop edi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0xA0
        ret 8
        UNREACHABLE_TRAP(0x53cd70)
    }
}

#undef public_53cde1
#undef public_53cde7
#undef public_53ce26
#undef public_53ce6d
#undef public_53ce6f
#undef public_53cee0
#undef public_53cf67
#undef public_53cf80
#undef public_53cf82
#undef public_53cfb7
#undef public_53d05d
