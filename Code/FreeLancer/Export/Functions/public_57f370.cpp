#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_57f370);
CLANG_FORWARD_PROC_SYMBOL(public_57fb00);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_57f394 _public_57f394
#define public_57f3b2 _public_57f3b2
#define public_57f3bd _public_57f3bd
#define public_57f3c6 _public_57f3c6
#define public_57f3d1 _public_57f3d1
#define public_57f3ed _public_57f3ed
#define public_57f404 _public_57f404
#define public_57f411 _public_57f411
#define public_57f41c _public_57f41c
#define public_57f41f _public_57f41f
#define public_57f437 _public_57f437
#define public_57f442 _public_57f442
#define public_57f445 _public_57f445
#define public_57f45a _public_57f45a
#define public_57f465 _public_57f465
#define public_57f470 _public_57f470
#define public_57f473 _public_57f473
#define public_57f487 _public_57f487
#define public_57f493 _public_57f493
#define public_57f49f _public_57f49f
#define public_57f4a2 _public_57f4a2
#define public_57f4c0 _public_57f4c0
#define public_57f4ff _public_57f4ff
#define public_57f512 _public_57f512
#define public_57f51d _public_57f51d
#define public_57f520 _public_57f520
#define public_57f52b _public_57f52b
#define public_57f53e _public_57f53e
#define public_57f565 _public_57f565
#define public_57f57f _public_57f57f
#define public_57f5a5 _public_57f5a5
#define public_57f5b8 _public_57f5b8
#define public_57f5c5 _public_57f5c5
#define public_57f5c7 _public_57f5c7
#define public_57f5d2 _public_57f5d2
#define public_57f5e9 _public_57f5e9
#define public_57f601 _public_57f601
#define public_57f60e _public_57f60e
#define public_57f610 _public_57f610
#define public_57f61c _public_57f61c
#define public_57f646 _public_57f646
#define public_57f65e _public_57f65e
#define public_57f66e _public_57f66e
#define public_57f678 _public_57f678
#define public_57f69b _public_57f69b
#define public_57f6ae _public_57f6ae
#define public_57f6b9 _public_57f6b9
#define public_57f6bc _public_57f6bc
#define public_57f6c6 _public_57f6c6
#define public_57f6ef _public_57f6ef
#define public_57f702 _public_57f702
#define public_57f70f _public_57f70f
#define public_57f711 _public_57f711
#define public_57f714 _public_57f714
#define public_57f717 _public_57f717
#define public_57f71a _public_57f71a

PROC_DECLARE(0x57f370, internal_57f370, public_57f370);
extern "C" NAKED register_t __cdecl internal_57f370()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        push edi
        mov edi, ecx
        lea ecx, ss:[esp+0x1C]
        call public_57fb00
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_57f3b2
        mov eax, dword ptr ds : [esi+8]
        public_57f394 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_57f437
        mov dword ptr ds : [ecx+4], eax
        jmp public_57f445
        public_57f3b2 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_57f3bd
        mov eax, edx
        jmp public_57f394
        public_57f3bd : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0xF]
        test bl, bl
        jne public_57f3d1
        public_57f3c6 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0xF]
        test bl, bl
        je public_57f3c6
        public_57f3d1 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_57f394
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_57f3ed
        mov dword ptr ds : [eax+4], ecx
        jmp public_57f404
        public_57f3ed : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_57f404 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_57f411
        mov dword ptr ds : [edx+4], ecx
        jmp public_57f41f
        public_57f411 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_57f41c
        mov dword ptr ds : [edx], ecx
        jmp public_57f41f
        public_57f41c : nop
        mov dword ptr ds : [edx+8], ecx
        public_57f41f : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0xE]
        mov dl, byte ptr ds : [ecx+0xE]
        mov byte ptr ds : [ecx+0xE], bl
        mov byte ptr ds : [esi+0xE], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_57f4a2
        public_57f437 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_57f442
        mov dword ptr ds : [ecx], eax
        jmp public_57f445
        public_57f442 : nop
        mov dword ptr ds : [ecx+8], eax
        public_57f445 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_57f473
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_57f45a
        mov edx, dword ptr ds : [esi+4]
        jmp public_57f470
        public_57f45a : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0xF]
        test bl, bl
        mov edx, eax
        jne public_57f470
        public_57f465 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0xF]
        test bl, bl
        je public_57f465
        public_57f470 : nop
        mov dword ptr ss : [ebp], edx
        public_57f473 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_57f4a2
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_57f487
        mov edx, dword ptr ds : [esi+4]
        jmp public_57f49f
        public_57f487 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0xF]
        test bl, bl
        mov edx, eax
        jne public_57f49f
        public_57f493 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0xF]
        test bl, bl
        je public_57f493
        public_57f49f : nop
        mov dword ptr ss : [ebp+8], edx
        public_57f4a2 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov dl, byte ptr ds : [ecx+0xE]
        mov bl, 1
        cmp dl, bl
        jne public_57f71a
        mov edx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [edx+4]
        je public_57f717
        nop 
        public_57f4c0 : nop
        cmp byte ptr ds : [eax+0xE], bl
        jne public_57f717
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_57f57f
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0xE]
        test dl, dl
        jne public_57f52b
        mov byte ptr ds : [ecx+0xE], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0xE], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_57f4ff
        mov dword ptr ds : [esi+4], ecx
        public_57f4ff : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_57f512
        mov dword ptr ds : [esi+4], edx
        jmp public_57f520
        public_57f512 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_57f51d
        mov dword ptr ds : [esi], edx
        jmp public_57f520
        public_57f51d : nop
        mov dword ptr ds : [esi+8], edx
        public_57f520 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+8]
        public_57f52b : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0xE], bl
        jne public_57f53e
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0xE], bl
        je public_57f5e9
        public_57f53e : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0xE], bl
        jne public_57f61c
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0xE], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0xE], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_57f565
        mov dword ptr ds : [esi+4], ecx
        public_57f565 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_57f601
        mov dword ptr ds : [esi+4], edx
        jmp public_57f610
        public_57f57f : nop
        mov dl, byte ptr ds : [ecx+0xE]
        test dl, dl
        jne public_57f5d2
        mov byte ptr ds : [ecx+0xE], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0xE], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_57f5a5
        mov dword ptr ds : [esi+4], ecx
        public_57f5a5 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_57f5b8
        mov dword ptr ds : [esi+4], edx
        jmp public_57f5c7
        public_57f5b8 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_57f5c5
        mov dword ptr ds : [esi+8], edx
        jmp public_57f5c7
        public_57f5c5 : nop
        mov dword ptr ds : [esi], edx
        public_57f5c7 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_57f5d2 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0xE], bl
        jne public_57f678
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0xE], bl
        jne public_57f678
        public_57f5e9 : nop
        mov byte ptr ds : [ecx+0xE], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_57f4c0
        jmp public_57f717
        public_57f601 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_57f60e
        mov dword ptr ds : [esi+8], edx
        jmp public_57f610
        public_57f60e : nop
        mov dword ptr ds : [esi], edx
        public_57f610 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_57f61c : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0xE]
        mov byte ptr ds : [ecx+0xE], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0xE], bl
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0xE], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_57f646
        mov dword ptr ds : [esi+4], ecx
        public_57f646 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_57f65e
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_57f714
        public_57f65e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_57f66e
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_57f714
        public_57f66e : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_57f714
        public_57f678 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0xE], bl
        jne public_57f6c6
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0xE], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0xE], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_57f69b
        mov dword ptr ds : [esi+4], ecx
        public_57f69b : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_57f6ae
        mov dword ptr ds : [esi+4], edx
        jmp public_57f6bc
        public_57f6ae : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_57f6b9
        mov dword ptr ds : [esi], edx
        jmp public_57f6bc
        public_57f6b9 : nop
        mov dword ptr ds : [esi+8], edx
        public_57f6bc : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_57f6c6 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0xE]
        mov byte ptr ds : [ecx+0xE], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0xE], bl
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0xE], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_57f6ef
        mov dword ptr ds : [esi+4], ecx
        public_57f6ef : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_57f702
        mov dword ptr ds : [esi+4], edx
        jmp public_57f711
        public_57f702 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_57f70f
        mov dword ptr ds : [esi+8], edx
        jmp public_57f711
        public_57f70f : nop
        mov dword ptr ds : [esi], edx
        public_57f711 : nop
        mov dword ptr ds : [edx+8], ecx
        public_57f714 : nop
        mov dword ptr ds : [ecx+4], edx
        public_57f717 : nop
        mov byte ptr ds : [eax+0xE], bl
        public_57f71a : nop
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        call public_5b7e1d
        mov eax, dword ptr ds : [edi+0x10]
        mov ecx, dword ptr ss : [esp+0x20]
        add esp, 4
        dec eax
        mov dword ptr ds : [edi+0x10], eax
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ecx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x57f370)
    }
}

#undef public_57f394
#undef public_57f3b2
#undef public_57f3bd
#undef public_57f3c6
#undef public_57f3d1
#undef public_57f3ed
#undef public_57f404
#undef public_57f411
#undef public_57f41c
#undef public_57f41f
#undef public_57f437
#undef public_57f442
#undef public_57f445
#undef public_57f45a
#undef public_57f465
#undef public_57f470
#undef public_57f473
#undef public_57f487
#undef public_57f493
#undef public_57f49f
#undef public_57f4a2
#undef public_57f4c0
#undef public_57f4ff
#undef public_57f512
#undef public_57f51d
#undef public_57f520
#undef public_57f52b
#undef public_57f53e
#undef public_57f565
#undef public_57f57f
#undef public_57f5a5
#undef public_57f5b8
#undef public_57f5c5
#undef public_57f5c7
#undef public_57f5d2
#undef public_57f5e9
#undef public_57f601
#undef public_57f60e
#undef public_57f610
#undef public_57f61c
#undef public_57f646
#undef public_57f65e
#undef public_57f66e
#undef public_57f678
#undef public_57f69b
#undef public_57f6ae
#undef public_57f6b9
#undef public_57f6bc
#undef public_57f6c6
#undef public_57f6ef
#undef public_57f702
#undef public_57f70f
#undef public_57f711
#undef public_57f714
#undef public_57f717
#undef public_57f71a
