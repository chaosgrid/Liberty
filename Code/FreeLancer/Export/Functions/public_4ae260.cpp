#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4ae030);
CLANG_FORWARD_PROC_SYMBOL(public_4ae260);
CLANG_FORWARD_PROC_SYMBOL(public_4af900);
CLANG_FORWARD_PROC_SYMBOL(public_53aaa0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5bcea8);

#define public_4ae2b7 _public_4ae2b7
#define public_4ae2cd _public_4ae2cd
#define public_4ae300 _public_4ae300
#define public_4ae317 _public_4ae317
#define public_4ae32f _public_4ae32f
#define public_4ae39e _public_4ae39e
#define public_4ae3d0 _public_4ae3d0
#define public_4ae400 _public_4ae400
#define public_4ae418 _public_4ae418
#define public_4ae44b _public_4ae44b
#define public_4ae44e _public_4ae44e
#define public_4ae460 _public_4ae460
#define public_4ae476 _public_4ae476

PROC_DECLARE(0x4ae260, internal_4ae260, public_4ae260);
extern "C" NAKED register_t __cdecl internal_4ae260()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bcea8 @0x4ae262*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bcea8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x20
        mov eax, dword ptr ss : [esp+0x30]
        push ebx
        push ebp
        push esi
        push edi
        xor ebx, ebx
        mov ebp, ecx
        mov ecx, dword ptr ss : [ebp+0x4B8]
        push ebx
        push ebx
        mov dword ptr ss : [ebp+0x838], eax
        mov edx, dword ptr ds : [ecx]
        push 0x38
        call dword ptr ds : [edx+0xA8]
        lea eax, ss:[esp+0x10]
        push eax
        mov ecx, ebp
        call public_4ae030
        mov edx, dword ptr ds : [eax+4]
        cmp edx, ebx
        mov dword ptr ss : [esp+0x38], ebx
        jne public_4ae2b7
        xor edx, edx
        jmp public_4ae2cd
        public_4ae2b7 : nop
        mov ecx, dword ptr ds : [eax+8]
        sub ecx, edx
        mov eax, 0x2E8BA2E9
        imul ecx
        sar edx, 3
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        public_4ae2cd : nop
        mov ecx, dword ptr ss : [ebp+0x4B8]
        mov eax, dword ptr ds : [ecx]
        dec edx
        push edx
        push ebx
        push 0x37
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ss : [esp+0x14]
        push ecx
        mov dword ptr ss : [esp+0x3C], 0xFFFFFFFF
        call public_5b7e1d
        add esp, 4
        lea esi, ss:[ebp+0x484]
        nop 
        lea esp, ss:[esp]
        public_4ae300 : nop
        lea edx, ss:[esp+0x10]
        push edx
        mov ecx, ebp
        call public_4ae030
        mov edx, dword ptr ds : [eax+4]
        test edx, edx
        jne public_4ae317
        xor edi, edi
        jmp public_4ae32f
        public_4ae317 : nop
        mov ecx, dword ptr ds : [eax+8]
        sub ecx, edx
        mov eax, 0x2E8BA2E9
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov edi, edx
        public_4ae32f : nop
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x14]
        push ecx
        push edx
        lea ecx, ss:[esp+0x18]
        call public_53aaa0
        mov eax, dword ptr ss : [esp+0x14]
        push eax
        call public_5b7e1d
        xor eax, eax
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x20], eax
        mov eax, dword ptr ds : [esi-0x34]
        mov cl, byte ptr ds : [eax+0x388]
        add esp, 4
        cmp ebx, edi
        jae public_4ae39e
        or cl, 4
        mov byte ptr ds : [eax+0x388], cl
        mov eax, dword ptr ds : [esi]
        or byte ptr ds : [eax+0x388], 4
        mov eax, dword ptr ds : [esi-0x108]
        or byte ptr ds : [eax+0x6C], 3
        mov eax, dword ptr ds : [esi-0xD4]
        or byte ptr ds : [eax+0x6C], 3
        mov eax, dword ptr ds : [esi-0xA0]
        mov cl, byte ptr ds : [eax+0x6C]
        or cl, 3
        jmp public_4ae3d0
        public_4ae39e : nop
        and cl, 0xFB
        mov byte ptr ds : [eax+0x388], cl
        mov eax, dword ptr ds : [esi]
        and byte ptr ds : [eax+0x388], 0xFB
        mov eax, dword ptr ds : [esi-0x108]
        and byte ptr ds : [eax+0x6C], 0xFC
        mov eax, dword ptr ds : [esi-0xD4]
        and byte ptr ds : [eax+0x6C], 0xFC
        mov eax, dword ptr ds : [esi-0xA0]
        mov cl, byte ptr ds : [eax+0x6C]
        and cl, 0xFC
        public_4ae3d0 : nop
        inc ebx
        add esi, 4
        cmp ebx, 0xD
        mov byte ptr ds : [eax+0x6C], cl
        jl public_4ae300
        push 0
        mov ecx, ebp
        call public_4af900
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, ebp
        call public_4ae030
        mov edx, dword ptr ds : [eax+4]
        test edx, edx
        jne public_4ae400
        xor esi, esi
        jmp public_4ae418
        public_4ae400 : nop
        mov ecx, dword ptr ds : [eax+8]
        sub ecx, edx
        mov eax, 0x2E8BA2E9
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov esi, edx
        public_4ae418 : nop
        mov ecx, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ss : [esp+0x24]
        push ecx
        push edx
        lea ecx, ss:[esp+0x28]
        call public_53aaa0
        mov eax, dword ptr ss : [esp+0x24]
        push eax
        call public_5b7e1d
        mov eax, dword ptr ss : [ebp+0x4B8]
        mov cl, byte ptr ds : [eax+0x6C]
        add esp, 4
        cmp esi, 0xD
        ja public_4ae44b
        and cl, 0xFC
        jmp public_4ae44e
        public_4ae44b : nop
        or cl, 3
        public_4ae44e : nop
        mov byte ptr ds : [eax+0x6C], cl
        xor eax, eax
        lea ecx, ss:[ebp+0x4D4]
        lea esp, ss:[esp]
        public_4ae460 : nop
        mov edx, dword ptr ss : [esp+0x40]
        cmp eax, edx
        je public_4ae476
        mov esi, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [public_679bb0]
        mov dword ptr ds : [esi+0x348], edi
        public_4ae476 : nop
        inc eax
        add ecx, 4
        cmp eax, 3
        jl public_4ae460
        mov ecx, dword ptr ss : [ebp+edx*4+0x4D4]
        mov edx, dword ptr ds : [public_679ba4]
        pop edi
        pop esi
        mov dword ptr ds : [ecx+0x348], edx
        mov ecx, dword ptr ss : [esp+0x28]
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x2C
        ret 4
        UNREACHABLE_TRAP(0x4ae260)
    }
}

#undef public_4ae2b7
#undef public_4ae2cd
#undef public_4ae300
#undef public_4ae317
#undef public_4ae32f
#undef public_4ae39e
#undef public_4ae3d0
#undef public_4ae400
#undef public_4ae418
#undef public_4ae44b
#undef public_4ae44e
#undef public_4ae460
#undef public_4ae476
