#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5312d0);
CLANG_FORWARD_PROC_SYMBOL(public_531930);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_5312f4 _public_5312f4
#define public_531312 _public_531312
#define public_53131d _public_53131d
#define public_531326 _public_531326
#define public_531331 _public_531331
#define public_53134d _public_53134d
#define public_531364 _public_531364
#define public_531371 _public_531371
#define public_53137c _public_53137c
#define public_53137f _public_53137f
#define public_531397 _public_531397
#define public_5313a2 _public_5313a2
#define public_5313a5 _public_5313a5
#define public_5313ba _public_5313ba
#define public_5313c5 _public_5313c5
#define public_5313d0 _public_5313d0
#define public_5313d3 _public_5313d3
#define public_5313e7 _public_5313e7
#define public_5313f3 _public_5313f3
#define public_5313ff _public_5313ff
#define public_531402 _public_531402
#define public_531420 _public_531420
#define public_53145f _public_53145f
#define public_531472 _public_531472
#define public_53147d _public_53147d
#define public_531480 _public_531480
#define public_53148b _public_53148b
#define public_53149e _public_53149e
#define public_5314c5 _public_5314c5
#define public_5314df _public_5314df
#define public_531505 _public_531505
#define public_531518 _public_531518
#define public_531525 _public_531525
#define public_531527 _public_531527
#define public_531532 _public_531532
#define public_531549 _public_531549
#define public_531561 _public_531561
#define public_53156e _public_53156e
#define public_531570 _public_531570
#define public_53157c _public_53157c
#define public_5315a6 _public_5315a6
#define public_5315be _public_5315be
#define public_5315ce _public_5315ce
#define public_5315d8 _public_5315d8
#define public_5315fb _public_5315fb
#define public_53160e _public_53160e
#define public_531619 _public_531619
#define public_53161c _public_53161c
#define public_531626 _public_531626
#define public_53164f _public_53164f
#define public_531662 _public_531662
#define public_53166f _public_53166f
#define public_531671 _public_531671
#define public_531674 _public_531674
#define public_531677 _public_531677
#define public_53167a _public_53167a

PROC_DECLARE(0x5312d0, internal_5312d0, public_5312d0);
extern "C" NAKED register_t __cdecl internal_5312d0()
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
        call public_531930
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_531312
        mov eax, dword ptr ds : [esi+8]
        public_5312f4 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_531397
        mov dword ptr ds : [ecx+4], eax
        jmp public_5313a5
        public_531312 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_53131d
        mov eax, edx
        jmp public_5312f4
        public_53131d : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x35]
        test bl, bl
        jne public_531331
        public_531326 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x35]
        test bl, bl
        je public_531326
        public_531331 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_5312f4
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_53134d
        mov dword ptr ds : [eax+4], ecx
        jmp public_531364
        public_53134d : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_531364 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_531371
        mov dword ptr ds : [edx+4], ecx
        jmp public_53137f
        public_531371 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_53137c
        mov dword ptr ds : [edx], ecx
        jmp public_53137f
        public_53137c : nop
        mov dword ptr ds : [edx+8], ecx
        public_53137f : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x34]
        mov dl, byte ptr ds : [ecx+0x34]
        mov byte ptr ds : [ecx+0x34], bl
        mov byte ptr ds : [esi+0x34], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_531402
        public_531397 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_5313a2
        mov dword ptr ds : [ecx], eax
        jmp public_5313a5
        public_5313a2 : nop
        mov dword ptr ds : [ecx+8], eax
        public_5313a5 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_5313d3
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_5313ba
        mov edx, dword ptr ds : [esi+4]
        jmp public_5313d0
        public_5313ba : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x35]
        test bl, bl
        mov edx, eax
        jne public_5313d0
        public_5313c5 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x35]
        test bl, bl
        je public_5313c5
        public_5313d0 : nop
        mov dword ptr ss : [ebp], edx
        public_5313d3 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_531402
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_5313e7
        mov edx, dword ptr ds : [esi+4]
        jmp public_5313ff
        public_5313e7 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x35]
        test bl, bl
        mov edx, eax
        jne public_5313ff
        public_5313f3 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x35]
        test bl, bl
        je public_5313f3
        public_5313ff : nop
        mov dword ptr ss : [ebp+8], edx
        public_531402 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov dl, byte ptr ds : [ecx+0x34]
        mov bl, 1
        cmp dl, bl
        jne public_53167a
        mov edx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [edx+4]
        je public_531677
        nop 
        public_531420 : nop
        cmp byte ptr ds : [eax+0x34], bl
        jne public_531677
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_5314df
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x34]
        test dl, dl
        jne public_53148b
        mov byte ptr ds : [ecx+0x34], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x34], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_53145f
        mov dword ptr ds : [esi+4], ecx
        public_53145f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_531472
        mov dword ptr ds : [esi+4], edx
        jmp public_531480
        public_531472 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_53147d
        mov dword ptr ds : [esi], edx
        jmp public_531480
        public_53147d : nop
        mov dword ptr ds : [esi+8], edx
        public_531480 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+8]
        public_53148b : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x34], bl
        jne public_53149e
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x34], bl
        je public_531549
        public_53149e : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x34], bl
        jne public_53157c
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x34], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x34], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_5314c5
        mov dword ptr ds : [esi+4], ecx
        public_5314c5 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_531561
        mov dword ptr ds : [esi+4], edx
        jmp public_531570
        public_5314df : nop
        mov dl, byte ptr ds : [ecx+0x34]
        test dl, dl
        jne public_531532
        mov byte ptr ds : [ecx+0x34], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x34], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_531505
        mov dword ptr ds : [esi+4], ecx
        public_531505 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_531518
        mov dword ptr ds : [esi+4], edx
        jmp public_531527
        public_531518 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_531525
        mov dword ptr ds : [esi+8], edx
        jmp public_531527
        public_531525 : nop
        mov dword ptr ds : [esi], edx
        public_531527 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_531532 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x34], bl
        jne public_5315d8
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x34], bl
        jne public_5315d8
        public_531549 : nop
        mov byte ptr ds : [ecx+0x34], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_531420
        jmp public_531677
        public_531561 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_53156e
        mov dword ptr ds : [esi+8], edx
        jmp public_531570
        public_53156e : nop
        mov dword ptr ds : [esi], edx
        public_531570 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_53157c : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x34]
        mov byte ptr ds : [ecx+0x34], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x34], bl
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x34], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_5315a6
        mov dword ptr ds : [esi+4], ecx
        public_5315a6 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_5315be
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_531674
        public_5315be : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_5315ce
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_531674
        public_5315ce : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_531674
        public_5315d8 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x34], bl
        jne public_531626
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x34], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x34], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_5315fb
        mov dword ptr ds : [esi+4], ecx
        public_5315fb : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_53160e
        mov dword ptr ds : [esi+4], edx
        jmp public_53161c
        public_53160e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_531619
        mov dword ptr ds : [esi], edx
        jmp public_53161c
        public_531619 : nop
        mov dword ptr ds : [esi+8], edx
        public_53161c : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_531626 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x34]
        mov byte ptr ds : [ecx+0x34], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x34], bl
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x34], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_53164f
        mov dword ptr ds : [esi+4], ecx
        public_53164f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_531662
        mov dword ptr ds : [esi+4], edx
        jmp public_531671
        public_531662 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_53166f
        mov dword ptr ds : [esi+8], edx
        jmp public_531671
        public_53166f : nop
        mov dword ptr ds : [esi], edx
        public_531671 : nop
        mov dword ptr ds : [edx+8], ecx
        public_531674 : nop
        mov dword ptr ds : [ecx+4], edx
        public_531677 : nop
        mov byte ptr ds : [eax+0x34], bl
        public_53167a : nop
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
        UNREACHABLE_TRAP(0x5312d0)
    }
}

#undef public_5312f4
#undef public_531312
#undef public_53131d
#undef public_531326
#undef public_531331
#undef public_53134d
#undef public_531364
#undef public_531371
#undef public_53137c
#undef public_53137f
#undef public_531397
#undef public_5313a2
#undef public_5313a5
#undef public_5313ba
#undef public_5313c5
#undef public_5313d0
#undef public_5313d3
#undef public_5313e7
#undef public_5313f3
#undef public_5313ff
#undef public_531402
#undef public_531420
#undef public_53145f
#undef public_531472
#undef public_53147d
#undef public_531480
#undef public_53148b
#undef public_53149e
#undef public_5314c5
#undef public_5314df
#undef public_531505
#undef public_531518
#undef public_531525
#undef public_531527
#undef public_531532
#undef public_531549
#undef public_531561
#undef public_53156e
#undef public_531570
#undef public_53157c
#undef public_5315a6
#undef public_5315be
#undef public_5315ce
#undef public_5315d8
#undef public_5315fb
#undef public_53160e
#undef public_531619
#undef public_53161c
#undef public_531626
#undef public_53164f
#undef public_531662
#undef public_53166f
#undef public_531671
#undef public_531674
#undef public_531677
#undef public_53167a
