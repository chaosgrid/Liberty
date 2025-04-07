#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6209eb0);
CLANG_FORWARD_PROC_SYMBOL(public_6209ef0);
CLANG_FORWARD_PROC_SYMBOL(public_6209f00);
CLANG_FORWARD_PROC_SYMBOL(public_6209f10);
CLANG_FORWARD_PROC_SYMBOL(public_620a1b0);
CLANG_FORWARD_PROC_SYMBOL(public_620a5a0);
CLANG_FORWARD_PROC_SYMBOL(public_620c870);
CLANG_FORWARD_JUMP_SYMBOL(public_62475c0);

#define public_62081b4 _public_62081b4
#define public_62081d4 _public_62081d4
#define public_6208287 _public_6208287
#define public_62082c5 _public_62082c5
#define public_62082e3 _public_62082e3
#define public_62082e7 _public_62082e7
#define public_6208300 _public_6208300
#define public_6208335 _public_6208335
#define public_6208377 _public_6208377
#define public_62083ac _public_62083ac
#define public_62083b0 _public_62083b0
#define public_62083cc _public_62083cc

PROC_DECLARE(0x6208130, internal_6208130, public_6208130);
extern "C" NAKED register_t __cdecl internal_6208130()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_62475c0 @0x6208132*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_62475c0
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push ebp
        mov ebp, dword ptr ss : [esp+0x28]
        push esi
        mov esi, dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x30]
        mov edx, dword ptr ds : [esi+0xC]
        push edi
        mov dword ptr ss : [esp+0xC], ebp
        lea edi, ds:[edx+ebp*8]
        mov dword ptr ss : [esp+0x2C], edi
        fcomp dword ptr ds : [edi]
        fnstsw ax
        and eax, 0x4100
        jne public_6208287
        mov ecx, dword ptr ds : [esi+0x14]
        lea eax, ss:[ebp+1]
        inc ecx
        cmp eax, ecx
        je public_62083cc
        fld dword ptr ds : [edx+eax*8]
        fcomp dword ptr ss : [esp+0x34]
        fnstsw ax
        and eax, 0x100
        je public_62083cc
        mov edx, dword ptr ds : [esi+0x14]
        mov eax, dword ptr ds : [esi+0xC]
        add esi, 8
        lea ecx, ds:[edi+8]
        lea edx, ds:[eax+edx*8+8]
        mov dword ptr ss : [esp+0x2C], ecx
        cmp ecx, edx
        setne al
        test al, al
        je public_62081d4
        public_62081b4 : nop
        fld dword ptr ds : [ecx]
        fcomp dword ptr ss : [esp+0x34]
        fnstsw ax
        and eax, 0x4100
        je public_62081d4
        add ecx, 8
        inc ebp
        cmp ecx, edx
        mov dword ptr ss : [esp+0x2C], ecx
        setne al
        test al, al
        jne public_62081b4
        public_62081d4 : nop
        mov ecx, dword ptr ds : [edi]
        add edi, 4
        mov dword ptr ss : [esp+0x14], ecx
        push edi
        lea ecx, ss:[esp+0x1C]
        call public_6209eb0
        mov eax, dword ptr ss : [esp+0x30]
        mov edx, dword ptr ss : [esp+0x34]
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x18], edx
        call public_6209ef0
        mov edi, eax
        push 0
        mov ecx, edi
        call public_620a1b0
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+0xC]
        mov ecx, edi
        sub ecx, eax
        lea eax, ds:[edi+8]
        sar ecx, 3
        sub edx, ecx
        shl edx, 3
        push edx
        push eax
        push edi
        call dword ptr ds : [public_624b060]
        mov ecx, dword ptr ds : [esi+0xC]
        add esp, 4
        dec ecx
        mov eax, esp
        mov dword ptr ds : [esi+0xC], ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        lea edx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x3C], esp
        mov dword ptr ds : [eax], ecx
        push edx
        lea ecx, ds:[eax+4]
        call public_6209eb0
        push ecx
        lea ecx, ss:[esp+0x38]
        mov eax, esp
        mov dword ptr ss : [esp+0x3C], esp
        push eax
        mov byte ptr ss : [esp+0x34], 0
        call public_6209f10
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, esi
        call public_620c870
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x24], 0xFFFFFFFF
        call public_620a5a0
        jmp public_62083b0
        public_6208287 : nop
        fld dword ptr ss : [esp+0x34]
        fcomp dword ptr ds : [edi]
        fnstsw ax
        test ah, 5
        jp public_62083b0
        test ebp, ebp
        je public_62083cc
        fld dword ptr ds : [edi-8]
        fcomp dword ptr ss : [esp+0x34]
        lea ecx, ds:[edi-8]
        fnstsw ax
        test ah, 0x41
        jnp public_62083cc
        add edx, 0xFFFFFFF8
        mov dword ptr ss : [esp+0x2C], ecx
        cmp ecx, edx
        setne al
        test al, al
        je public_62082e7
        public_62082c5 : nop
        fld dword ptr ds : [ecx]
        fcomp dword ptr ss : [esp+0x34]
        fnstsw ax
        test ah, 5
        jnp public_62082e3
        sub ecx, 8
        dec ebp
        cmp ecx, edx
        mov dword ptr ss : [esp+0x2C], ecx
        setne al
        test al, al
        jne public_62082c5
        public_62082e3 : nop
        mov dword ptr ss : [esp+0xC], ebp
        public_62082e7 : nop
        add ecx, 8
        mov dword ptr ss : [esp+0x2C], ecx
        mov ebp, dword ptr ds : [edi+4]
        test ebp, ebp
        mov dword ptr ss : [esp+0x18], ebp
        je public_6208300
        mov eax, dword ptr ss : [ebp]
        push ebp
        call dword ptr ds : [eax+4]
        public_6208300 : nop
        mov ecx, dword ptr ss : [esp+0x34]
        mov edx, dword ptr ss : [esp+0x30]
        add esi, 8
        mov dword ptr ss : [esp+0x14], ecx
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0x28], 2
        call public_6209ef0
        mov edi, eax
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        je public_6208335
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi+4], 0
        public_6208335 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi+0xC]
        mov edx, edi
        sub edx, ecx
        lea ecx, ds:[edi+8]
        sar edx, 3
        sub eax, edx
        shl eax, 3
        push eax
        push ecx
        push edi
        call dword ptr ds : [public_624b060]
        mov edx, dword ptr ds : [esi+0xC]
        add esp, 4
        dec edx
        mov eax, esp
        mov dword ptr ds : [esi+0xC], edx
        mov edx, dword ptr ss : [esp+0x3C]
        mov dword ptr ds : [eax], edx
        mov dword ptr ss : [esp+0x38], esp
        test ebp, ebp
        mov dword ptr ds : [eax+4], ebp
        je public_6208377
        mov eax, dword ptr ss : [ebp]
        push ebp
        call dword ptr ds : [eax+4]
        public_6208377 : nop
        push ecx
        lea edx, ss:[esp+0x38]
        mov ecx, esp
        mov dword ptr ss : [esp+0x40], esp
        push edx
        mov byte ptr ss : [esp+0x34], 2
        call public_6209f00
        lea eax, ss:[esp+0x1C]
        mov ecx, esi
        push eax
        call public_620c870
        test ebp, ebp
        mov dword ptr ss : [esp+0x24], 0xFFFFFFFF
        je public_62083ac
        mov ecx, dword ptr ss : [ebp]
        push ebp
        call dword ptr ds : [ecx+8]
        public_62083ac : nop
        mov ebp, dword ptr ss : [esp+0xC]
        public_62083b0 : nop
        mov eax, dword ptr ss : [esp+0x38]
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ebp
        xor eax, eax
        mov dword ptr fs : [0], ecx
        pop ebp
        add esp, 0x1C
        ret 0x10
        public_62083cc : nop
        mov edx, dword ptr ss : [esp+0x34]
        mov dword ptr ds : [edi], edx
        jmp public_62083b0
        UNREACHABLE_TRAP(0x6208130)
    }
}

#undef public_62081b4
#undef public_62081d4
#undef public_6208287
#undef public_62082c5
#undef public_62082e3
#undef public_62082e7
#undef public_6208300
#undef public_6208335
#undef public_6208377
#undef public_62083ac
#undef public_62083b0
#undef public_62083cc
