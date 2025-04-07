#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c29090);
CLANG_FORWARD_PROC_SYMBOL(public_6c34ea0);
CLANG_FORWARD_PROC_SYMBOL(public_6c34eac);

#define public_6c290e0 _public_6c290e0
#define public_6c29110 _public_6c29110
#define public_6c2911b _public_6c2911b
#define public_6c2912c _public_6c2912c
#define public_6c29140 _public_6c29140
#define public_6c2917d _public_6c2917d

PROC_DECLARE(0x6c29090, internal_6c29090, public_6c29090);
extern "C" NAKED register_t __cdecl internal_6c29090()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        mov ebx, ecx
        cmp dword ptr ds : [ebx], 5
        jne public_6c2917d
        mov eax, dword ptr ds : [ebx+0x1C]
        push ebp
        sub eax, 2
        push esi
        lea eax, ds:[eax+eax*2]
        shl eax, 1
        push edi
        push eax
        call public_6c34eac
        mov ecx, dword ptr ds : [ebx+0x18]
        mov ebp, eax
        mov eax, dword ptr ds : [ebx+0x1C]
        add eax, 0xFFFFFFFE
        xor esi, esi
        add esp, 4
        xor edx, edx
        test eax, eax
        mov dword ptr ss : [esp+0x18], ebp
        mov dword ptr ss : [esp+0x10], esi
        mov dword ptr ss : [esp+0x14], eax
        jbe public_6c29140
        lea esi, ss:[ebp+4]
        lea eax, ds:[ecx+4]
        nop 
        lea esp, ss:[esp]
        public_6c290e0 : nop
        mov cx, word ptr ds : [eax-4]
        mov di, word ptr ds : [eax-2]
        cmp cx, di
        je public_6c2912c
        mov bp, word ptr ds : [eax]
        cmp di, bp
        je public_6c2912c
        cmp bp, cx
        je public_6c2912c
        test dl, 1
        mov word ptr ds : [esi-4], cx
        je public_6c29110
        mov cx, word ptr ds : [eax]
        mov word ptr ds : [esi-2], cx
        mov cx, word ptr ds : [eax-2]
        jmp public_6c2911b
        public_6c29110 : nop
        mov cx, word ptr ds : [eax-2]
        mov word ptr ds : [esi-2], cx
        mov cx, word ptr ds : [eax]
        public_6c2911b : nop
        mov edi, dword ptr ss : [esp+0x10]
        add edi, 3
        mov word ptr ds : [esi], cx
        mov dword ptr ss : [esp+0x10], edi
        add esi, 6
        public_6c2912c : nop
        mov ecx, dword ptr ss : [esp+0x14]
        inc edx
        add eax, 2
        cmp edx, ecx
        jb public_6c290e0
        mov ebp, dword ptr ss : [esp+0x18]
        mov esi, dword ptr ss : [esp+0x10]
        public_6c29140 : nop
        mov dword ptr ds : [ebx+0x1C], esi
        mov edx, dword ptr ds : [ebx+0x18]
        push edx
        call public_6c34ea0
        add esi, esi
        push esi
        call public_6c34eac
        mov ecx, esi
        mov dword ptr ds : [ebx+0x18], eax
        mov edi, eax
        mov eax, ecx
        shr ecx, 2
        mov esi, ebp
        rep movsd
        mov ecx, eax
        and ecx, 3
        push ebp
        rep movsb
        call public_6c34ea0
        add esp, 0xC
        pop edi
        pop esi
        mov dword ptr ds : [ebx], 4
        pop ebp
        public_6c2917d : nop
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6c29090)
    }
}

#undef public_6c290e0
#undef public_6c29110
#undef public_6c2911b
#undef public_6c2912c
#undef public_6c29140
#undef public_6c2917d
