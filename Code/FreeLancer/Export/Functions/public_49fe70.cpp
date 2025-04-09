#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_420fb0);
CLANG_FORWARD_PROC_SYMBOL(public_421670);
CLANG_FORWARD_PROC_SYMBOL(public_421690);
CLANG_FORWARD_PROC_SYMBOL(public_421a70);
CLANG_FORWARD_PROC_SYMBOL(public_421dd0);
CLANG_FORWARD_PROC_SYMBOL(public_421ed0);
CLANG_FORWARD_PROC_SYMBOL(public_4220a0);
CLANG_FORWARD_PROC_SYMBOL(public_4220c0);
CLANG_FORWARD_PROC_SYMBOL(public_422690);
CLANG_FORWARD_PROC_SYMBOL(public_425640);
CLANG_FORWARD_PROC_SYMBOL(public_498730);
CLANG_FORWARD_PROC_SYMBOL(public_49fe70);
CLANG_FORWARD_PROC_SYMBOL(public_4c4690);
CLANG_FORWARD_PROC_SYMBOL(public_4c4830);
CLANG_FORWARD_PROC_SYMBOL(public_4c4fb0);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_49ff1f _public_49ff1f
#define public_49fff5 _public_49fff5
#define public_4a003e _public_4a003e
#define public_4a0085 _public_4a0085
#define public_4a00ec _public_4a00ec
#define public_4a00f9 _public_4a00f9
#define public_4a0115 _public_4a0115
#define public_4a0145 _public_4a0145
#define public_4a018c _public_4a018c
#define public_4a01f3 _public_4a01f3
#define public_4a0200 _public_4a0200
#define public_4a020f _public_4a020f

PROC_DECLARE(0x49fe70, internal_49fe70, public_49fe70);
extern "C" NAKED register_t __cdecl internal_49fe70()
{
    __asm
    {
        sub esp, 0xA8
        push ebx
        push ebp
        mov ebp, ecx
        mov al, byte ptr ss : [ebp+0x87D]
        test al, al
        push esi
        push edi
        je public_4a020f
        mov eax, dword ptr ss : [ebp+0x7D0]
        test eax, eax
        je public_4a020f
        lea eax, ss:[ebp+0x3D4]
        mov esi, eax
        mov ecx, 9
        lea edi, ss:[esp+0x64]
        rep movsd
        mov dword ptr ss : [esp+0x1C], 0
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x88], ecx
        mov dword ptr ss : [esp+0x24], 0
        mov ecx, dword ptr ss : [esp+0x24]
        mov esi, eax
        mov eax, dword ptr ds : [public_67209c]
        test eax, eax
        mov dword ptr ss : [esp+0x20], 0
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x90], ecx
        mov ecx, 9
        lea edi, ss:[esp+0x94]
        mov dword ptr ss : [esp+0x8C], edx
        rep movsd
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x24], 0
        jne public_49ff1f
        call public_5b73e0
        mov dword ptr ds : [public_67209c], eax
        public_49ff1f : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea ecx, ss:[esp+0x68]
        push ecx
        lea ecx, ss:[esp+0x30]
        push ecx
        push eax
        call dword ptr ds : [edx+0x28]
        mov edx, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ss : [esp+0x2C]
        mov ecx, 9
        lea esi, ss:[esp+0x94]
        lea edi, ss:[esp+0x34]
        rep movsd
        mov ecx, dword ptr ss : [esp+0x30]
        mov dword ptr ss : [esp+0x58], edx
        lea edx, ss:[esp+0x34]
        push edx
        push 0
        mov dword ptr ss : [esp+0x64], eax
        mov dword ptr ss : [esp+0x68], ecx
        call public_422690
        push 0xB50
        call public_421ed0
        push 0xB71
        call public_421ed0
        push 0xB44
        call public_421ed0
        push 0xDE1
        call public_421ed0
        push 0xBE2
        call public_421dd0
        push 6
        push 5
        call public_4220c0
        mov ecx, dword ptr ss : [ebp+0xBD0]
        add esp, 0x24
        push 0
        call public_425640
        push eax
        call public_4220a0
        push 0xFF
        push 0xFF
        push 0xFF
        call public_421a70
        push 4
        call public_421670
        add esp, 0x14
        call public_4c4690
        lea edi, ds:[eax-1]
        or esi, 0xFFFFFFFF
        cmp edi, 0xFFFFFFFF
        mov dword ptr ss : [esp+0x10], esi
        mov dword ptr ss : [esp+0x18], edi
        jle public_4a00f9
        public_49fff5 : nop
        cmp esi, 0xFFFFFFFF
        jne public_4a003e
        mov eax, dword ptr ss : [ebp+0x4B8]
        test eax, eax
        je public_4a003e
        mov cl, byte ptr ds : [eax+0x48]
        test cl, cl
        je public_4a00ec
        mov ecx, dword ptr ss : [ebp+0x7E0]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax]
        mov ebx, eax
        call public_4c4830
        cmp eax, ebx
        jne public_4a00ec
        mov ecx, dword ptr ss : [ebp+0x4B4]
        add ecx, 8
        call public_420fb0
        mov ecx, dword ptr ss : [ebp+0x4B8]
        jmp public_4a0085
        public_4a003e : nop
        mov eax, dword ptr ss : [ebp+esi*4+0x4B8]
        test eax, eax
        je public_4a00ec
        mov ecx, dword ptr ss : [ebp+esi*4+0x4BC]
        test ecx, ecx
        je public_4a00ec
        mov dl, byte ptr ds : [eax+0x48]
        test dl, dl
        je public_4a00ec
        mov dl, byte ptr ds : [ecx+0x48]
        test dl, dl
        je public_4a00ec
        lea ecx, ds:[eax+8]
        call public_420fb0
        mov ecx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [ebp+ecx*4+0x4BC]
        public_4a0085 : nop
        mov ebx, dword ptr ds : [eax+8]
        mov edi, dword ptr ds : [eax+4]
        mov esi, dword ptr ds : [eax]
        add ecx, 8
        call public_420fb0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x30], eax
        mov eax, dword ptr ds : [public_679b80]
        mov dword ptr ss : [esp+0x14], eax
        push 0x3B656042
        lea eax, ss:[esp+0x18]
        push eax
/*FIXUP push offset public_679b80 @0x4a00b4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_679b80
        sub esp, 0xC
        mov eax, esp
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x48]
        mov dword ptr ds : [eax+4], edx
        sub esp, 0xC
        mov dword ptr ds : [eax+8], ecx
        mov edx, esp
        mov dword ptr ds : [edx], esi
        mov dword ptr ds : [edx+4], edi
        mov byte ptr ss : [esp+0x3B], 0
        mov dword ptr ds : [edx+8], ebx
        call public_498730
        mov edi, dword ptr ss : [esp+0x3C]
        mov esi, dword ptr ss : [esp+0x34]
        add esp, 0x24
        public_4a00ec : nop
        inc esi
        cmp esi, edi
        mov dword ptr ss : [esp+0x10], esi
        jl public_49fff5
        public_4a00f9 : nop
        call public_4c4fb0
        lea esi, ds:[eax-1]
        or ecx, 0xFFFFFFFF
        cmp esi, 0xFFFFFFFF
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x18], esi
        jle public_4a0200
        public_4a0115 : nop
        cmp ecx, 0xFFFFFFFF
        jne public_4a0145
        mov eax, dword ptr ss : [ebp+0x644]
        test eax, eax
        je public_4a0145
        mov dl, byte ptr ds : [eax+0x48]
        test dl, dl
        je public_4a01f3
        mov ecx, dword ptr ss : [ebp+0x4B4]
        add ecx, 8
        call public_420fb0
        mov ecx, dword ptr ss : [ebp+0x644]
        jmp public_4a018c
        public_4a0145 : nop
        mov eax, dword ptr ss : [ebp+ecx*4+0x644]
        test eax, eax
        je public_4a01f3
        mov edx, dword ptr ss : [ebp+ecx*4+0x648]
        test edx, edx
        je public_4a01f3
        mov bl, byte ptr ds : [eax+0x48]
        test bl, bl
        je public_4a01f3
        mov bl, byte ptr ds : [edx+0x48]
        test bl, bl
        je public_4a01f3
        lea ecx, ds:[eax+8]
        call public_420fb0
        mov ecx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [ebp+ecx*4+0x648]
        public_4a018c : nop
        mov ebx, dword ptr ds : [eax+8]
        mov edi, dword ptr ds : [eax+4]
        mov esi, dword ptr ds : [eax]
        add ecx, 8
        call public_420fb0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x30], eax
        mov eax, dword ptr ds : [public_679b80]
        mov dword ptr ss : [esp+0x14], eax
        push 0x3BA3D70A
        lea eax, ss:[esp+0x18]
        push eax
/*FIXUP push offset public_679b80 @0x4a01bb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_679b80
        sub esp, 0xC
        mov eax, esp
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x48]
        mov dword ptr ds : [eax+4], edx
        sub esp, 0xC
        mov dword ptr ds : [eax+8], ecx
        mov edx, esp
        mov dword ptr ds : [edx], esi
        mov dword ptr ds : [edx+4], edi
        mov byte ptr ss : [esp+0x3B], 0
        mov dword ptr ds : [edx+8], ebx
        call public_498730
        mov ecx, dword ptr ss : [esp+0x34]
        mov esi, dword ptr ss : [esp+0x3C]
        add esp, 0x24
        public_4a01f3 : nop
        inc ecx
        cmp ecx, esi
        mov dword ptr ss : [esp+0x10], ecx
        jl public_4a0115
        public_4a0200 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xA8
        jmp public_421690
        public_4a020f : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xA8
        ret 
        UNREACHABLE_TRAP(0x49fe70)
    }
}

#undef public_49ff1f
#undef public_49fff5
#undef public_4a003e
#undef public_4a0085
#undef public_4a00ec
#undef public_4a00f9
#undef public_4a0115
#undef public_4a0145
#undef public_4a018c
#undef public_4a01f3
#undef public_4a0200
#undef public_4a020f
