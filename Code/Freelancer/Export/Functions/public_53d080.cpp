#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_425480);
CLANG_FORWARD_PROC_SYMBOL(public_52e0a0);
CLANG_FORWARD_PROC_SYMBOL(public_533100);
CLANG_FORWARD_PROC_SYMBOL(public_540c30);
CLANG_FORWARD_PROC_SYMBOL(public_5416c0);
CLANG_FORWARD_PROC_SYMBOL(public_542550);
CLANG_FORWARD_PROC_SYMBOL(public_548eb0);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5c0c8e);

#define public_53d0ed _public_53d0ed
#define public_53d0ef _public_53d0ef
#define public_53d12e _public_53d12e
#define public_53d178 _public_53d178
#define public_53d17c _public_53d17c
#define public_53d1e5 _public_53d1e5
#define public_53d2c6 _public_53d2c6
#define public_53d2e2 _public_53d2e2
#define public_53d2e4 _public_53d2e4
#define public_53d31e _public_53d31e
#define public_53d384 _public_53d384
#define public_53d408 _public_53d408

PROC_DECLARE(0x53d080, internal_53d080, public_53d080);
extern "C" NAKED register_t __cdecl internal_53d080()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5c0c8e @0x53d088*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c0c8e
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xCC
        push ebx
        push esi
        push edi
        call dword ptr ds : [public_5c6a28]
        test al, al
        je public_53d408
        push ebp
        push 0xC0
        call public_5b7e84
        mov ebp, eax
        add esp, 4
        mov dword ptr ss : [esp+0x10], ebp
        xor edi, edi
        cmp ebp, edi
        mov dword ptr ss : [esp+0xE4], edi
        je public_53d0ed
        push 4
        mov ecx, ebp
        call public_542550
        mov dword ptr ss : [ebp], offset public_5df26c
        mov dword ptr ss : [ebp+4], offset public_5df1ec
        mov dword ptr ss : [ebp+0xC], offset public_5df1e4
        jmp public_53d0ef
        public_53d0ed : nop
        xor ebp, ebp
        public_53d0ef : nop
        mov dword ptr ss : [esp+0xE4], 0xFFFFFFFF
        call dword ptr ds : [public_5c60d0]
        test al, al
        mov ebx, dword ptr ss : [esp+0xF0]
        je public_53d12e
        mov eax, dword ptr ss : [ebp]
        push ebx
        mov ecx, ebp
        call dword ptr ds : [eax+0x16C]
        test al, al
        jne public_53d2c6
        mov edx, dword ptr ss : [ebp+0xC]
        lea ecx, ss:[ebp+0xC]
        push 1
        call dword ptr ds : [edx]
        jmp public_53d31e
        public_53d12e : nop
        mov eax, dword ptr ds : [ebx+0x28]
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
        je public_53d178
        mov eax, dword ptr ds : [eax+4]
        cmp eax, edi
        je public_53d178
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0xA7
        cmp cl, 0xA7
        mov dword ptr ss : [esp+0x10], eax
        je public_53d17c
        public_53d178 : nop
        mov dword ptr ss : [esp+0x10], edi
        public_53d17c : nop
        lea ecx, ss:[esp+0x2C]
        call public_52e0a0
        mov edx, dword ptr ds : [public_5c6368]
        mov ecx, dword ptr ds : [ebx]
        mov dword ptr ss : [esp+0x88], edi
        mov dword ptr ss : [esp+0x8C], edi
        mov ax, word ptr ds : [edx]
        mov edx, dword ptr ds : [public_613ed0]
        mov word ptr ss : [esp+0x90], ax
        mov eax, dword ptr ds : [ebx+0x2C]
        mov dword ptr ss : [esp+0x34], eax
        lea eax, ds:[ebx+4]
        mov dword ptr ss : [esp+0x2C], ecx
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x30], edx
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x44], eax
        mov eax, dword ptr ds : [public_6789f8]
        cmp eax, edi
        mov dword ptr ss : [esp+0x3C], ecx
        mov dword ptr ss : [esp+0x40], edx
        jne public_53d1e5
        call public_5b73e0
        mov dword ptr ds : [public_6789f8], eax
        public_53d1e5 : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[ebx+0x10]
        push ecx
        lea ecx, ss:[esp+0xBC]
        push ecx
        push eax
        call dword ptr ds : [edx+0x54]
        mov dword ptr ss : [esp+0x18], 0
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, 9
        lea esi, ss:[esp+0xB8]
        lea edi, ss:[esp+0x48]
        rep movsd
        mov dword ptr ss : [esp+0x14], 0
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x70], eax
        mov dword ptr ss : [esp+0x6C], edx
        mov dword ptr ss : [esp+0x1C], 0
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x18], 0
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x14], 0
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x7C], eax
        mov eax, dword ptr ds : [ebx+0x20]
        mov dword ptr ss : [esp+0x74], ecx
        mov dword ptr ss : [esp+0x78], edx
        mov edx, dword ptr ds : [ebx+0x30]
        mov dword ptr ss : [esp+0x1C], 0
        mov ecx, dword ptr ss : [esp+0x1C]
        push 0
        push eax
        mov dword ptr ss : [esp+0x88], ecx
        mov dword ptr ss : [esp+0x90], edx
        call public_5416c0
        mov cx, word ptr ds : [ebx+0x24]
        mov esi, dword ptr ss : [esp+0x18]
        add esp, 8
        lea edx, ss:[esp+0x2C]
        mov word ptr ss : [esp+0x90], cx
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0x90], eax
        call dword ptr ds : [public_5c6a50]
        lea eax, ss:[esp+0x78]
        push eax
        lea eax, ds:[ebx+0x10]
        push eax
        lea ecx, ss:[esp+0x74]
        push ecx
        lea eax, ds:[ebx+4]
        push eax
        push esi
        call dword ptr ds : [public_5c6a30]
        add esp, 0x14
        xor edi, edi
        public_53d2c6 : nop
        lea eax, ss:[ebp+0xC]
        cmp eax, edi
        je public_53d2e2
        mov eax, dword ptr ds : [eax+4]
        cmp eax, edi
        je public_53d2e2
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 0xA7
        cmp dl, 0xA7
        je public_53d2e4
        public_53d2e2 : nop
        xor eax, eax
        public_53d2e4 : nop
        mov ecx, eax
        call dword ptr ds : [public_5c6590]
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        push 1
        mov ecx, eax
        call dword ptr ds : [edx+0x20]
        mov eax, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [eax+0x1C]
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
        public_53d31e : nop
        mov eax, dword ptr ds : [ebx+0x30]
        cmp eax, edi
        pop ebp
        je public_53d408
        push eax
        call public_548eb0
        add esp, 4
        test al, al
        jne public_53d408
        mov eax, dword ptr ds : [ebx+0x30]
        push edi
        push eax
        call public_5416c0
        add esp, 8
        cmp eax, edi
        je public_53d408
        xor ecx, ecx
        mov cx, word ptr ds : [ebx+0x34]
        push ecx
        mov ecx, eax
        call public_533100
        mov esi, eax
        cmp esi, edi
        je public_53d408
        cmp dword ptr ds : [esi+4], edi
        je public_53d408
        mov eax, dword ptr ds : [public_6789f8]
        cmp eax, edi
        jne public_53d384
        call public_5b73e0
        mov dword ptr ds : [public_6789f8], eax
        public_53d384 : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[ebx+0x10]
        push ecx
        lea ecx, ss:[esp+0x94]
        push ecx
        push eax
        call dword ptr ds : [edx+0x54]
        fld dword ptr ss : [esp+0x98]
        fld dword ptr ss : [esp+0xA4]
        mov edx, dword ptr ds : [esi]
        fld dword ptr ss : [esp+0xB0]
        lea eax, ss:[esp+0x1C]
        fstp dword ptr ss : [esp+0x18]
        fxch 
        push eax
        fchs 
        mov ecx, esi
        fstp dword ptr ss : [esp+0x20]
        fchs 
        fld dword ptr ss : [esp+0x1C]
        fchs 
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [public_5dd55c]
        fstp dword ptr ss : [esp+0x20]
        fxch 
        fmul dword ptr ds : [public_5dd55c]
        fstp dword ptr ss : [esp+0x24]
        fmul dword ptr ds : [public_5dd55c]
        fld dword ptr ss : [esp+0x20]
        fadd dword ptr ds : [ebx+4]
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x24]
        fadd dword ptr ds : [ebx+8]
        fstp dword ptr ss : [esp+0x24]
        fadd dword ptr ds : [ebx+0xC]
        fstp dword ptr ss : [esp+0x28]
        call dword ptr ds : [edx+0x14]
        public_53d408 : nop
        mov ecx, dword ptr ss : [esp+0xD8]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0xD8
        ret 8
        UNREACHABLE_TRAP(0x53d080)
    }
}

#undef public_53d0ed
#undef public_53d0ef
#undef public_53d12e
#undef public_53d178
#undef public_53d17c
#undef public_53d1e5
#undef public_53d2c6
#undef public_53d2e2
#undef public_53d2e4
#undef public_53d31e
#undef public_53d384
#undef public_53d408
