#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4215b0);
CLANG_FORWARD_PROC_SYMBOL(public_425480);
CLANG_FORWARD_PROC_SYMBOL(public_53e470);
CLANG_FORWARD_PROC_SYMBOL(public_540c30);
CLANG_FORWARD_PROC_SYMBOL(public_5416c0);
CLANG_FORWARD_PROC_SYMBOL(public_543f50);
CLANG_FORWARD_PROC_SYMBOL(public_547550);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5c0c2e);

#define public_53b960 _public_53b960
#define public_53b989 _public_53b989
#define public_53b98b _public_53b98b
#define public_53b9e6 _public_53b9e6
#define public_53ba32 _public_53ba32
#define public_53ba36 _public_53ba36
#define public_53baef _public_53baef
#define public_53bbbd _public_53bbbd
#define public_53bbdc _public_53bbdc
#define public_53bbde _public_53bbde
#define public_53bc27 _public_53bc27
#define public_53bc44 _public_53bc44
#define public_53bc46 _public_53bc46
#define public_53bc64 _public_53bc64

PROC_DECLARE(0x53b910, internal_53b910, public_53b910);
extern "C" NAKED register_t __cdecl internal_53b910()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5c0c2e @0x53b918*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c0c2e
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xAC
        push edi
        call dword ptr ds : [public_5c6a28]
        test al, al
        je public_53bc64
        mov ecx, dword ptr ss : [esp+0xC4]
        mov al, byte ptr ds : [ecx+0x10]
        test al, al
        push ebp
        mov ebp, dword ptr ds : [ecx+0xC]
        jbe public_53bc44
        movzx eax, al
        push ebx
        mov dword ptr ss : [esp+0x10], eax
        push esi
        lea esp, ss:[esp]
        public_53b960 : nop
        push 0xB0
        call public_5b7e84
        add esp, 4
        mov dword ptr ss : [esp+0x10], eax
        xor edi, edi
        cmp eax, edi
        mov dword ptr ss : [esp+0xC4], edi
        je public_53b989
        mov ecx, eax
        call public_53e470
        mov ebx, eax
        jmp public_53b98b
        public_53b989 : nop
        xor ebx, ebx
        public_53b98b : nop
        mov dword ptr ss : [esp+0xC4], 0xFFFFFFFF
        call dword ptr ds : [public_5c60d0]
        test al, al
        je public_53b9e6
        mov edx, dword ptr ds : [ebx]
        push ebp
        mov ecx, ebx
        call dword ptr ds : [edx+0x16C]
        test al, al
        jne public_53bbbd
/*FIXUP push offset public_5deccc @0x53b9b3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5deccc
        push 0x17C
/*FIXUP push offset public_5dec60 @0x53b9bd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dec60
        mov eax, 0x100002
/*FIXUP push offset public_5c8bd4 @0x53b9c7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8bd4
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        mov edx, dword ptr ds : [ebx+0xC]
        add esp, 0x14
        lea ecx, ds:[ebx+0xC]
        push 1
        call dword ptr ds : [edx]
        jmp public_53bc27
        public_53b9e6 : nop
        mov eax, dword ptr ss : [ebp+0x10]
        push eax
        call dword ptr ds : [public_5c603c]
        mov esi, eax
        mov edx, dword ptr ds : [esi]
        add esp, 4
        mov ecx, esi
        call dword ptr ds : [edx+0xC]
        mov eax, dword ptr ds : [ebx]
        push esi
        mov ecx, ebx
        call dword ptr ds : [eax+0x168]
        mov ecx, esi
        call dword ptr ds : [public_5c65c8]
        lea eax, ds:[ebx+0xC]
        cmp eax, edi
        je public_53ba32
        mov eax, dword ptr ds : [eax+4]
        cmp eax, edi
        je public_53ba32
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x803
        cmp ecx, 0x803
        mov dword ptr ss : [esp+0x10], eax
        je public_53ba36
        public_53ba32 : nop
        mov dword ptr ss : [esp+0x10], edi
        public_53ba36 : nop
        lea ecx, ss:[esp+0x40]
        mov dword ptr ss : [esp+0x64], 0
        mov dword ptr ss : [esp+0x68], 0
        mov dword ptr ss : [esp+0x6C], 0
        mov dword ptr ss : [esp+0x70], 0
        mov dword ptr ss : [esp+0x74], 0
        mov dword ptr ss : [esp+0x78], 0
        mov dword ptr ss : [esp+0x7C], edi
        call public_4215b0
        mov eax, dword ptr ds : [public_613ed0]
        mov edx, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+0x14]
        mov dword ptr ss : [esp+0x28], eax
        lea eax, ss:[ebp+0x1C]
        mov dword ptr ss : [esp+0x24], edx
        mov edx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x30], ecx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x34], edx
        mov edx, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [public_6789f8]
        cmp eax, edi
        mov dword ptr ss : [esp+0x80], edi
        mov dword ptr ss : [esp+0x84], edi
        mov dword ptr ss : [esp+0x88], edi
        mov dword ptr ss : [esp+0x8C], edi
        mov dword ptr ss : [esp+0x90], 0
        mov byte ptr ss : [esp+0x94], 1
        mov byte ptr ss : [esp+0x95], 0
        mov dword ptr ss : [esp+0x2C], edi
        mov dword ptr ss : [esp+0x38], ecx
        mov dword ptr ss : [esp+0x3C], edx
        jne public_53baef
        call public_5b73e0
        mov dword ptr ds : [public_6789f8], eax
        public_53baef : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[ebp+0x28]
        push ecx
        lea ecx, ss:[esp+0x9C]
        push ecx
        push eax
        call dword ptr ds : [edx+0x54]
        mov ecx, 9
        lea esi, ss:[esp+0x98]
        lea edi, ss:[esp+0x40]
        rep movsd
        lea esi, ss:[ebp+0x38]
        mov edx, esi
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x64], eax
        mov eax, dword ptr ss : [esp+0xD0]
        mov dword ptr ss : [esp+0x68], ecx
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [ebp+4]
        mov dword ptr ss : [esp+0x6C], edx
        mov edx, dword ptr ss : [ebp+0x18]
        push eax
        mov dword ptr ss : [esp+0x84], ecx
        mov dword ptr ss : [esp+0x88], edx
        call dword ptr ds : [public_5c603c]
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ss : [ebp+8]
        mov edi, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x8C], eax
        mov al, byte ptr ss : [ebp+0x45]
        mov byte ptr ss : [esp+0x99], al
        add esp, 4
        mov dword ptr ss : [esp+0x8C], ecx
        lea eax, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x90], edx
        mov edx, dword ptr ds : [edi]
        push eax
        mov ecx, edi
        call dword ptr ds : [edx+0xA0]
        lea ecx, ss:[esp+0x18]
        push ecx
        lea eax, ss:[ebp+0x28]
        push eax
        push esi
        lea eax, ss:[ebp+0x1C]
        push eax
        push edi
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x30], 0
        mov dword ptr ss : [esp+0x34], 0
        call dword ptr ds : [public_5c6a30]
        add esp, 0x14
        xor edi, edi
        public_53bbbd : nop
        lea eax, ds:[ebx+0xC]
        cmp eax, edi
        je public_53bbdc
        mov ecx, dword ptr ds : [eax+4]
        cmp ecx, edi
        je public_53bbdc
        mov edx, dword ptr ds : [ecx+0x4C]
        and edx, 0x803
        cmp edx, 0x803
        je public_53bbde
        public_53bbdc : nop
        xor ecx, ecx
        public_53bbde : nop
        call dword ptr ds : [public_5c6590]
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        push 1
        mov ecx, eax
        call dword ptr ds : [edx+0x20]
        mov eax, dword ptr ds : [ebx]
        mov ecx, ebx
        call dword ptr ds : [eax+0x1C]
        push eax
        call public_425480
        mov edx, dword ptr ds : [ebx]
        add esp, 4
        mov ecx, ebx
        call dword ptr ds : [edx+0x170]
        movzx eax, byte ptr ss : [ebp+0x46]
        mov ecx, dword ptr ds : [public_673344]
        push eax
        push ecx
        mov ecx, ebx
        call public_547550
        push edi
        push ebx
        call public_540c30
        add esp, 8
        public_53bc27 : nop
        mov eax, dword ptr ss : [esp+0x14]
        add ebp, 0x48
        dec eax
        mov dword ptr ss : [esp+0x14], eax
        jne public_53b960
        mov ecx, dword ptr ss : [esp+0xD0]
        pop esi
        pop ebx
        jmp public_53bc46
        public_53bc44 : nop
        xor edi, edi
        public_53bc46 : nop
        cmp dword ptr ds : [ecx+4], 1
        pop ebp
        jne public_53bc64
        mov edx, dword ptr ds : [ecx]
        push edi
        push edx
        call public_5416c0
        add esp, 8
        cmp eax, edi
        je public_53bc64
        mov ecx, eax
        call public_543f50
        public_53bc64 : nop
        mov ecx, dword ptr ss : [esp+0xB0]
        pop edi
        mov dword ptr fs : [0], ecx
        add esp, 0xB8
        ret 8
        UNREACHABLE_TRAP(0x53b910)
    }
}

#undef public_53b960
#undef public_53b989
#undef public_53b98b
#undef public_53b9e6
#undef public_53ba32
#undef public_53ba36
#undef public_53baef
#undef public_53bbbd
#undef public_53bbdc
#undef public_53bbde
#undef public_53bc27
#undef public_53bc44
#undef public_53bc46
#undef public_53bc64
